#include "iter.hpp"

#include <vector>

template <typename T>
void	ft_print(T &elem) {
	std::cout<<elem<<std::endl;
}

int main() {
	{
		try {int len = 4;
			if (len <= 0)
				throw std::invalid_argument("Range for length <= 0");
			int *arr = new int[len];
			for (int i = 0; i < len; i++)
				arr[i] = i * 10;
			iter(arr, len, ft_print<int>);
			delete [] arr;
		}
		catch (const std::exception &e){
			std::cerr<<"ERROR: "<<e.what()<<std::endl;
		}
	}
	{
		try {
			int len = 5;
			if (len <= 0)
				throw std::invalid_argument("Range for length <= 0");
			std::string *ar = new std::string[len];
			for (int i = 0; i < len ; i++)
				ar[i] = "1334";
			iter(ar, len, ft_print<std::string>);
			delete [] ar;
		}
		catch (const std::exception &e){
			std::cerr<<"ERROR: "<<e.what()<<std::endl;
		}
	}
}
