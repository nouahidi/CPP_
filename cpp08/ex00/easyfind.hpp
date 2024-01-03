# ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>

template <typename T>
typename T::iterator easyfind(T &Cont, int i) {
	typename T::iterator it = std::find(Cont.begin(), Cont.end(), i);
	if (it != Cont.end())
		return (it);
	else
		throw	std::runtime_error("Value not found in the container");
}

# endif