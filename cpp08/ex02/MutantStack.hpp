#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack(){};
		MutantStack(const MutantStack &Obj){
			*this = Obj;
		};
		~MutantStack(){}

		MutantStack	&operator=(const MutantStack &Obj) {
			if (this != &Obj)
				*this = Obj;
			return (*this);
		}
		typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin(){
			return this->c.begin();
		};
        iterator end(){
			return this->c.end();
		};

};

#endif