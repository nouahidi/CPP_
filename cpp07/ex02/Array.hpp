# ifndef ARRAY_HPP 
# define ARRAY_HPP 

#include <iostream>

template <typename T>
class Array {
	private:
		unsigned int	n;
		T				*Data;
	public:
		Array(): n(), Data(0){}
		Array(unsigned int n) : n(n) {
			Data = new T[n];
    		for (unsigned int i = 0; i < n; i++)
        		Data[i] = T();
		}
		Array(const Array &Obj) {
			n = Obj.n;
			Data = new T[Obj.n];
			for (unsigned int i = 0; i < n; i++)
				Data[i] = Obj.Data[i];
		}
		~Array(){
			delete [] Data;
		}

		Array   &operator=(const Array &Obj) {
			if (this != &Obj) {
				delete [] Data;
				n = Obj.n;
				Data = new T[n];
				for (int i = 0; i < n; i++)
					Data[i] = Obj.Data[i];
			}
			return (*this);
		}

		T	&operator[](unsigned int i) {
			if (i >= n || !Data) {
				if (i >= n)
					throw std::out_of_range("This number out of range !!");
				else
					throw std::out_of_range("nulptr");
			}
			return (Data[i]);
		}

		unsigned int	ft_size() {
			return (n);
		}
};

# endif