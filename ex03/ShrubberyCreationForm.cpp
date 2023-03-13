/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 11:26:19 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:19:44 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) : Form("Shrubbery", 145, 137), target(target)
{
	std::cout << "I like to create Shrubbery" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &cpy) : Form(cpy.getName(), 145, 137), target(cpy.getTarget())
{
	std::cout << "I like to copy Shrubbery" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "I like to destroy Shrubbery" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& a)
{
	this->target = a.getTarget();
	if (a.getIsSigned())
		this->setSigned(true);
	return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor) const
{
	if (!this->getIsSigned())
		throw ShrubberyCreationForm::IsNotSigned();
	else if (executor.getGrade() > 137)
		throw ShrubberyCreationForm::GradeTooLowException();
	else
	{
		int HowMuchTreeDoYouWant = 8;

		std::ofstream tree(this->getTarget() + "_shrubbery");
		if (!tree)
		{
			std::cout << "can't create file" << std::endl;
			return ;
		}

		for (int i = 0; i < HowMuchTreeDoYouWant; i++)
		{
			tree << "     ccee88oo          " << std::endl;
			tree << "  C8O8O8Q8PoOb o8oo    " << std::endl;
			tree << " dOB69QO8PdUOpugoO9bD  " << std::endl;
			tree << "CgggbU8OU qOp qOdoUOdcb" << std::endl;
			tree << "    6OuU  /p u gcoUodpP" << std::endl;
			tree << "      \\\\\\//  /douUP    " << std::endl;
			tree << "        \\\\\\////        " << std::endl;
			tree << "         |||/\\         " << std::endl;
			tree << "         |||\\/         " << std::endl;
			tree << "         |||||         " << std::endl;
			tree << "   .....//||||\\....    \n" << std::endl;
		}
	}
}
