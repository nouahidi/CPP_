#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

#include <iostream>
#include <vector>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>
class Bitcoin {
	private:
		std::map<std::string, float>	map;
		bool							open;
	public:
		Bitcoin();
		Bitcoin(const Bitcoin &Obj);
		~Bitcoin();

		Bitcoin						&operator=(const Bitcoin &Obj);
		void						setData(std::string file);
		void						parseDate(std::string line);
		void						printRes(float value, std::string Dat);
};

std::vector<std::string>	ft_split(const std::string &str, char delimiter);
double						MyStod(std::string inp);

#endif