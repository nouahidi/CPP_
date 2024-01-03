#include <iostream>
#include <fstream>
#include <string>

std::string ft_search_and_replace(const std::string& read, const std::string& s1, const std::string& s2) {
	std::string result = read;
	size_t pos = 0;

	while ((pos = result.find(s1, pos)) != std::string::npos){
		result.replace(pos, s1.length(), s2);
		pos += s2.length();
	}
	return result;
}

int main(int ac, char** av) {
	if (ac != 4){
		std::cerr <<"\033[31m"<< "Usage: " << av[0] << " <input_file> <search_string> <replace_string>" 
		<<std::endl;
		return (1);
	}
	if (!av[2][0])
		return (puts("\033[31m <search_string> is empty"),1);
	std::ifstream inputFile(av[1]);
	if (!inputFile.is_open()) {
		std::cerr <<"\033[31m"<< "Error: Cannot open input file." << std::endl;
		return (1);
	}
	std::string outputFileName = std::string(av[1]) + ".replace";
	std::ofstream outputFile(outputFileName);
	if (!outputFile.is_open()) {
		std::cerr <<"\033[31m"<< "Error: Cannot open output file." << std::endl;
		return (1);
	}
	std::string line;
	while (std::getline(inputFile, line)) {
		std::string modifiedLine = ft_search_and_replace(line, av[2], av[3]);
		outputFile << modifiedLine << '\n';
	}
	inputFile.close();
	outputFile.close();
	std::cout <<"\033[32m"<< "Replacement complete. Output written to " << outputFileName << std::endl;
	return 0;
}
