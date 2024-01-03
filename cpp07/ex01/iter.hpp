#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T, typename type>
void	iter(T *array, size_t length, type function) {
	if (!array)
		throw std::invalid_argument("nulptr");
	else
		for (size_t i = 0; i < length; i++)
			function(array[i]);
}

#endif