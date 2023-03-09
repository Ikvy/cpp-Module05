/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:58:12 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/09 15:58:44 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(150)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	std::cout << "I like to create bureaucrats" << std::endl;
	this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& cpy)
{
	std::cout << "I like to copy bureaucrats" << std::endl;
	*this = cpy;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "I like to destroy bureaucrats" << std::endl;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& a)
{
	this->name = a.getName();
	this->grade = a.getGrade();
	return (*this);
}

std::string Bureaucrat::getName() const
{
	return (this->name);
}

unsigned int Bureaucrat::getGrade() const
{
	return (this->grade);
}

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const& b)
{
	std::cout << b.getName() << ",  bureaucrat grade " << b.getGrade();
	return (ostream);
}

void	Bureaucrat::gradeUp(const int value)
{
	if (this->grade - value < 1)
		throw (Bureaucrat::GradeTooHighException);
	else
		this->grade -= value;
}

void	Bureaucrat::gradeDown(const int value)
{
	if (this->grade - value > 150)
		throw (Bureaucrat::GradeTooLowException);
	else
		this->grade += value;
}
