#include " PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = "default";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : AForm(copy)
{
    *this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const &target) : AForm("PresidentialPardonForm", 25, 5)
{
    this->target = target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
    if (this != &rhs)
        this->target = rhs.target;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

void	PresidentialPardonForm::execute(Bureaucrat const &exec) const
{
    AForm::execute(exec);
    std::cout << "this " << this->target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}