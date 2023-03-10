/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:08:29 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:20:07 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>

#include "Bureaucrat.hpp"
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : Form("Robotomy", 72, 45), target(target)
{
	std::cout << "I like to create Robotomy" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &cpy) : Form(cpy.getName(), 72, 45), target(cpy.getTarget())
{
	std::cout << "I like to copy Robotomy" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "I like to destroy Robotomy" << std::endl;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& a)
{
	this->target = a.getTarget();
	if (a.getIsSigned())
		this->setSigned(true);
	return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	if (!this->getIsSigned())
		throw RobotomyRequestForm::IsNotSigned();
	else if (executor.getGrade() > 137)
		throw RobotomyRequestForm::GradeTooLowException();
	else
	{
		srand(time(0));
		int odds = rand();

		std::cout << "vvvvVVVVVFFFFFFFfffiiifffFFFFFF" << std::endl;
		if (odds % 2)
			std::cout << this->target << " was successfully robotomized" << std::endl;
		else
			std::cout << "operation failed" << std::endl;
	}
}
