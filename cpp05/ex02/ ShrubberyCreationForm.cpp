#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = "default";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm(copy)
{
	*this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target) : AForm("ShrubberyCreationForm", 145, 137)
{
	this->target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	if (this != &rhs)
		this->target = rhs.target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

void	ShrubberyCreationForm::execute(Bureaucrat const &exec) const
{
	AForm::execute(exec);
	std::ofstream file;
	file.open(this->target + "_shrubbery");

	std::cout << "            #### ####" << std::endl;
    std::cout << "        ### \\/#|### |/####" << std::endl;
    std::cout << "       ##\\/#/ \\||/##/_/##/_#" << std::endl;
    std::cout << "     ###  \\/###|/ \\/ # ###" << std::endl;
    std::cout << "   ##_\\_#\\_\\## | #/###_/_####" << std::endl;
    std::cout << "  ## #### # \\ #| /  #### ##/##" << std::endl;
    std::cout << "   __#_--###`  |{,###---###-~" << std::endl;
    std::cout << "             \\ }{" << std::endl;
    std::cout << "              }}{" << std::endl;
    std::cout << "              }}{" << std::endl;
    std::cout << "         ejm  {{}" << std::endl;
    std::cout << "        , -=-~{ .-^- _" << std::endl;
    std::cout << "              `}" << std::endl;
    std::cout << "               {" << std::endl;
	std::endl;

	std::cout << "File " << this->target << "_shrubbery created." << std::endl;
	file.close();
}