#ifndef SERIALIZER
# define SERIALIZER

#include <iostream>
#include "Data.hpp"

class Serializer {
	private:
		Serializer();
	public:
		~Serializer();
		Serializer(const Serializer &Obj);
		Serializer &operator=(const Serializer &Obj);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif