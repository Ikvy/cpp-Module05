/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:00:50 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/09 15:16:18 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"


Form::Form(const std::string name, unsigned int signGrade, unsigned int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
		if (signGrade < 1 || execGrade < 1)
			throw (Form::GradeTooHighException());
		if (signGrade > 150 || execGrade > 150)
			throw (Form::GradeTooLowException());
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& cpy) : name(cpy.getName()), signGrade(cpy.getSignedGrade()), execGrade(cpy.getExecGrade())
{
	std::cout << "Form copy constructor called" << std::endl;
	*this = cpy;
}

Form::~Form()
{
	std::cout << "Form destructor called" << std::endl;
}

Form& Form::operator=(const Form& a)
{
	this->isSigned = a.getIsSigned();
	return (*this);
}


///get
const std::string Form::getName() const
{
	return (this->name);
}

unsigned int Form::getIsSigned() const
{
	return (this->isSigned);
}

unsigned int Form::getExecGrade() const
{
	return (this->execGrade);
}

unsigned int Form::getSignedGrade() const
{
	return (this->signGrade);
}

void Form::beSigned(const Bureaucrat& who)
{
		if (who.getGrade() <= this->signGrade)
		{
			this->isSigned = true;
			std::cout << who.getName() << " signed " << this->name << std::endl;
		}
		else
		{
			std::cout << who.getName() << " couldn't sign " << this->name << " because grade too low"<< std::endl;
			throw(Form::GradeTooLowException());
		}

}

std::ostream& operator<<(std::ostream& ostream, Form const &f)
{
	std::cout << f.getName() << std::endl << "is signed : " << f.getIsSigned() << std::endl;
	std::cout << "sign grade : " << f.getSignedGrade() << std::endl;
	std::cout << "exec grade : " << f.getExecGrade();
	return (ostream);
}
