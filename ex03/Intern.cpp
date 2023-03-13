/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:48:58 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/13 11:01:14 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <iterator>

#include "Intern.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "I like to create interns" << std::endl;
}

Intern::Intern(const Intern& cpy)
{
	std::cout << "I like to copy interns" << std::endl;
	*this = cpy;
}

Intern::~Intern()
{
	std::cout << "I like to destroy interns" << std::endl;
}

Intern& Intern::operator=(const Intern& a)
{
	(void)a;
	return(*this);
}

Form* Intern::makeForm(std::string name,const std::string &target)
{
	Form *ret = NULL;
	std::string possibleNames[] = {"shrubbery creation", "robotomy request", "presidential pardon"};

	std::string *search = std::find(std::begin(possibleNames), std::end(possibleNames), name);
	try
	{
		switch(std::distance(std::begin(possibleNames), search))
		{
			case 0:
				ret = new ShrubberyCreationForm(target);
				break;
			case 1:
				ret = new RobotomyRequestForm(target);
				break;
			case 2:
				ret = new PresidentialPardonForm(target);
				break;
			default:
				ret = NULL;
				throw(Intern::UnknownNameException());
				break;
		}
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	return (ret);
}
