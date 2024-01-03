#include "Brain.hpp"

Brain::Brain(){
	std::cout<<"Brain: Default Constructor Called"<<std::endl;
	for(int i = 0; i < 100; i++)
		idea[i] = "";
}
Brain::Brain(const Brain & Obj){
	std::cout<<"Brain: Copy Constructor Called"<<std::endl;
	*this = Obj;
}
Brain::~Brain(){
	std::cout<<"Brain: Destructor Called"<<std::endl;
}
Brain &Brain::operator=(const Brain & Obj){
	if (this != &Obj)
		*this->idea = *Obj.idea;
	return (*this);
}
std::string *Brain::getIdea(void){
	return (this->idea);
}