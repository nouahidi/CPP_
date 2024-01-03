#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default", 145, 137){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Name) : AForm(Name, 145, 137) {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &Obj) : AForm(Obj) {}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &Obj){
	if (this != &Obj)
		*this = Obj;
	return (*this);
}

const char*	ShrubberyCreationForm::Unsigned::what() const throw(){
	return ("Unsigned Form !!");
}

void		ShrubberyCreationForm::beSigned(Bureaucrat const & executor){
	if (getSigning())
	{
		std::cout<<"Thats Form cannot be Signed beceause it is signed"<<std::endl;
		return ;
	}
	if (executor.getGrade() > getGradeSigne())
		throw(Bureaucrat::GradeTooLowException());
	else if (executor.getGrade() < 0 || executor.getGrade() > 150){
		std::cout<<"beSigned:"<<"\033[31m"<<" Bureaucrat Grade not Valid"<<"\033[0m"<<std::endl;
		return ;
	}
	else {
		setSigning(1);
		std::cout<<"\033[33m"<<"ShrubberyCreationForm: Signed by "<<executor.getName()<<"\033[0m"<<std::endl;
	}
}

void		ShrubberyCreationForm::execute(Bureaucrat const & executor)const{
	if (!getSigning()){
		puts("here");
		throw(ShrubberyCreationForm::Unsigned());
	}
	else if (executor.getGrade() > getGradeExecute()){
		throw(Bureaucrat::GradeTooLowException());
	}
	else
	{
		std::ofstream tree_file("ascii_tree_example.txt");
		if (!tree_file.is_open()){
        	std::cerr << "Error opening file for writing\n";
        	return ;
    	}
		 tree_file << "              _{\\ _{\\{\\/}/}/}__" << std::endl;
    	tree_file << "             {/{/\\}{/{/\\}(\\}{/\\} _" << std::endl;
    	tree_file << "            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _" << std::endl;
    	tree_file << "         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}" << std::endl;
    	tree_file << "        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}" << std::endl;
    	tree_file << "       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}" << std::endl;
    	tree_file << "   (-{/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}" << std::endl;
    	tree_file << "   (-_{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/}}}-)" << std::endl;
    	tree_file << "  (-{/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}-)" << std::endl;
    	tree_file << "   (-{\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}" << std::endl;
    	tree_file << "    (-{/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}}}\\}(_)" << std::endl;
    	tree_file << "   (-{/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}-)" << std::endl;
    	tree_file << "    (-{/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/-)}\\}" << std::endl;
    	tree_file << "      (-{/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(-)\\}" << std::endl;
    	tree_file << "       (-(_){/{\\/}{\\{\\/}/}{}}{\\)/}/}(_)" << std::endl;
    	tree_file << "         (-{/{/{\\{\\/}{/{\\{\\{}}(_)/}}-)" << std::endl;
    	tree_file << "          (-{/{\\{\\{\\/}/}{\\{}}/}}-)" << std::endl;
    	tree_file << "            (-{){/ {\\/}{\\/} \\}}-)" << std::endl;
    	tree_file << "                  \\.-'.-/" << std::endl;
    	tree_file << "          __...--- |'-.-'| --...__" << std::endl;
    	tree_file << "   _...--` . `     |.'-._| '  . .  '`--..__" << std::endl;
    	tree_file << " -`    ' .  . '    |.'-._| '  . .  '    " << std::endl;
    	tree_file << " .  '-  '    .--'  | '-.'|    .  '  . ' -  --" << std::endl;
    	tree_file << "          ' ..     |'-_.-| .  `  ' .  '  --" << std::endl;
    	tree_file << "  .  '  .       _.-|-._ -|-._  .  '  .    -" << std::endl;
    	tree_file << "              .'   |'- .-|   '.  . `     -" << std::endl;
    	tree_file << "  ..-'   ' .  '.   `-._.-`   .'  '  - ." << std::endl;
    	tree_file << "   .-' '        '-._______.-'     '  ." << std::endl;
    	tree_file << "        .      ~, " << std::endl;
    	tree_file << "    .       .   ||   .    ' '-." << std::endl;
    	tree_file << "            .   ||    .    ' '-." << std::endl;
    	tree_file << "                     . ___ '" << std::endl;
		std::cout<<"\033[32m"<<"ShrubberyCreationForm: Executed by "<<executor.getName()<<"\033[0m"<<std::endl;
	}
}