#include "BitcoinExchange.hpp"

std::vector<std::string> ft_split(const std::string &str, char delimiter) {
	std::vector<std::string> result;
	std::istringstream stream(str);
	std::string token;

	while (std::getline(stream, token, delimiter))
		result.push_back(token);
	return result;
}

Bitcoin::Bitcoin(const Bitcoin &Obj) {
	*this = Obj;
}

Bitcoin	&Bitcoin::operator=(const Bitcoin &Obj) {
	if (this != &Obj)
		*this = Obj;
	return (*this);
}
Bitcoin::Bitcoin(){
	std::ifstream    inpf("data.csv");
	if (!inpf.is_open())
		throw std::runtime_error("ERROR");
	open = 1;
	std::string	line;
	std::getline(inpf, line);
	std::vector<std::string> tokens;
	while (std::getline(inpf, line)){
		tokens = ft_split(line, ',');
		if (tokens.size() != 2)
			throw std::runtime_error("ERROR");
		this->map[tokens[0]] = MyStod(tokens[1]);
	}
}

std::string	skip_Space(std::string str) {
	for (int i = 0; i < (int)str.size();i++) {
		if (str[i] != ' ' && str[i] != '\t')
			break ;
		if (i + 1 >= (int)str.size())
			return ("");
	}
	size_t start = str.find_first_not_of(" \t");
	if (start == std::string::npos)
		return str;
	size_t end = str.find_last_not_of(" \t");
	return (str.substr(start, end - start + 1));
}

double	MyStod(std::string inp) {
	double	nbr = 0.0;
	int		sn = 1;
	int		i = 0;
	inp = skip_Space(inp);
	if (inp[0] == '+' || inp[0] == '-') {
		if (inp[0] == '-')
			sn = -1;
		i++;
	}
	for (; i < static_cast<int>(inp.size()) && isdigit(inp[i]); i++) {
		nbr = (nbr * 10.0) + (inp[i] - '0');
	}
	if (inp[i] == '.') {
		double decimalMultiplier = 0.1;
		i++;
		for (; i < static_cast<int>(inp.size()) && isdigit(inp[i]); i++) {
			nbr += (inp[i] - '0') * decimalMultiplier;
			decimalMultiplier *= 0.1;
		}
	}
	return (nbr * sn);
}

static int		parseBegin(std::string line) {
	std::vector<std::string>	beginLine = ft_split(line, ' ');
	std::vector<std::string>::iterator it = beginLine.begin();

	for (it = beginLine.begin(); it != beginLine.end(); ) {
		if (*it == "" || *it == " " || *it == "\t")
			it = beginLine.erase(it);
		else
			++it;
	}
	if (beginLine.size() != 3)
		return (1);
	if (beginLine[0] != "date" || beginLine[1] != "|" || beginLine[2] != "value")
		return (1);
	return (0);
}

static bool	isValidDate(const std::string& dateString) {
	int year, month, day;
	std::vector<std::string> tab = ft_split(dateString, '-');
	for (int i = 0; i < 3; i++)
		if (tab[0].size() != 4 || tab[1].size() != 2 || tab[2].size() != 2)
			return (false);
	year = std::atoi(tab[0].c_str());
	month = std::atoi(tab[1].c_str());
	day = std::atoi(tab[2].c_str());
	if (year < 1 || month < 1 || month > 12 || day < 1 || day > 31)
		return (false);
	if ((month == 4 || month == 6 || month == 9 || month == 11) && day > 30)
		return (false);
	if (month == 2) {
		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
			if (day > 29)
				return (false);
		}
		else
			if (day > 28)
				return (false);
	}
	return (true);
}

static bool	containsNonDigit(const std::string& str) {
	for (int i = 0; i < (int)str.size(); i++)
		if (!std::isdigit(str[i]))
			return false;
	return true;
}

static bool	isBadInp(std::string s1, std::string s2) {
	std::vector<std::string>	Dat = ft_split(s1, '-');

	bool flags = 0;
	if (Dat.size() != 3)
		return (false);
	for (int i = 0; i < (int)Dat.size(); i++) {
		if (!containsNonDigit(Dat[i]))
			return false;
	}
	int i = 0;
	if (s2[0] == '+' || s2[0] == '-')
		i++;
	for (; i < (int)s2.size(); i++) {
		if (!std::isdigit(s2[i])) {
			if (s2[i] == '.' && !flags)
				flags = 1;
			else
				return false;
	}
}
	return (true);
}

void	Bitcoin::printRes(float value, std::string Dat) 
{
	std::map<std::string, float>::iterator it = map.upper_bound(Dat);
	if (it != map.begin())
		it--;
	std::cout<<Dat<< " => "<<value << " = "<< std::fixed << std::setprecision(2)<<it->second * value << std::endl;
}


void	Bitcoin::parseDate(std::string line) {
	std::vector<std::string>	beginLine = ft_split(line, ' ');
	std::vector<std::string>::iterator it = beginLine.begin();

	for (it = beginLine.begin(); it != beginLine.end(); ) {
		if (*it == "" || *it == " " || *it == "\t")
			it = beginLine.erase(it);
		else
			++it;
	}
	if (beginLine.size() != 3 || beginLine[1] != "|" || !isBadInp(beginLine[0], beginLine[2]))
		std::cout<<"Error: bad input => "<<line<<std::endl;
	else if (!isValidDate(beginLine[0]) || MyStod(beginLine[2]) < 0 || MyStod(beginLine[2]) > 1000) {
		if (!isValidDate(beginLine[0]))
			std::cout<<"Error: This date does not exist."<<std::endl;
		else if (MyStod(beginLine[2]) < 0)
			std::cout<<"Error: not a positive number."<<std::endl;
		else
			std::cout<<"Error: too large a number."<<std::endl;
	}
	else
		printRes(MyStod(beginLine[2]), beginLine[0]);
}

void	Bitcoin::setData(std::string file) {
	std::ifstream    inpf(file);
	if (!inpf.is_open())
		throw std::runtime_error("Error: File not found");
	std::string	line;
	while (std::getline(inpf, line)) {
		line = skip_Space(line);
		if (line[0])
			break ;
	}
	if (!line[0])
		throw std::invalid_argument("Error: File empty");
	if (parseBegin(line))
		throw std::invalid_argument("Error: Beginning Of File");
	while (std::getline(inpf, line)) {
		line = skip_Space(line);
		if (line[0])
			parseDate(line);
	}
}

Bitcoin::~Bitcoin() {}