/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:00:50 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/08 15:37:13 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp" 


Form::Form(const std::string name, unsigned int signGrade, unsigned int execGrade) : name(name), signGrade(signGrade), execGrade(execGrade)
{
	try
	{
		if (signGrade < 1 || execGrade < 1)
			throw (Form::GradeTooHighException());
		if (signGrade > 150 || execGrade > 150)
			throw (Form::GradeTooLowException());
	}
	catch(std::exception &e)
	{
		std::cout << "Exeption caught : " << e.what() << std::endl;
		return;
	}
	std::cout << "Form default constructor called" << std::endl;
}

Form::Form(const Form& cpy) : name(cpy.getName()), signGrade(cpy.getSignedGrade()), execGrade(cpy.getExecGrade())
{
	*this = cpy;
	std::cout << "Form copy constructor called" << std::endl;
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

//set
/*void Form::setIsSigned(const bool& b)
{
	this->isSigned = b;
}*/

void Form::beSigned(const Bureaucrat& who)
{
	unsigned int grade = who.getGrade();
	try
	{
		if (grade > 150)
			throw (Form::GradeTooLowException());
		if (grade < 1)
			throw (Form::GradeTooHighException());
	}
	catch(std::exception &e)
	{
		std::cout << "Exeption caught : " << e.what() << std::endl;
		return;
	}
	try
	{
		if (grade <= this->signGrade)
		{
			this->isSigned = true;
			std::cout << who.getName() << " signed " << this->name << std::endl;
		}
		else
			throw(Form::GradeTooLowException());
	}
	catch(std::exception &e)
	{
		std::cout << who.getName() << " couldn’t sign " << this->name << " because " << e.what() << std::endl;
	}

}

std::ostream& operator<<(std::ostream& ostream, Form const &f)
{
	std::cout << f.getName() << std::endl << "is signed : " << f.getIsSigned() << std::endl;
	std::cout << "sign grade : " << f.getSignedGrade() << std::endl;
	std::cout << "exec garde : " << f.getExecGrade() << std::endl;
	return (ostream);
}
