/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:48:25 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:23:08 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : Form("Presidential Pardon", 25, 5), target(target)
{
	std::cout << "I like to create PresidentialForm" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &cpy) : Form(cpy.getName(), 25, 5), target(cpy.getTarget())
{
	std::cout << "I like to copy PresidentialForm" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "I like to destroy PresidentialForm" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& a)
{
	this->target = a.getTarget();
	if (a.getIsSigned())
		this->setSigned(true);
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor)const
{
	if (!this->getIsSigned())
		throw PresidentialPardonForm::IsNotSigned();
	else if (executor.getGrade() > 137)
		throw PresidentialPardonForm::GradeTooLowException();
	else
		std::cout << this->target << " was forgiven by Zaphod Beeblebrox" << std::endl;
}
