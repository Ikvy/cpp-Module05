/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:56:32 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:22:18 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{

	std::cout << "\ntree test" << std::endl;
	try
	{
		Bureaucrat treeMaker("god", 137);
		ShrubberyCreationForm test("uwu");
		
		test.beSigned(treeMaker);
		test.execute(treeMaker);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\nlobotomy test" << std::endl;
	try
	{
		Bureaucrat doctor("an awful person", 2);
		RobotomyRequestForm test("sad uwu");

		test.beSigned(doctor);
		test.execute(doctor);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\npresidential test" << std::endl;
	try
	{
		Bureaucrat guy("an awful person", 1);
		PresidentialPardonForm test("forgiven uwu");

		test.beSigned(guy);
		test.execute(guy);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}

	std::cout << "\nbureaucrat execution test" << std::endl;
	try
	{
		Bureaucrat guy("an awful person", 1);
		PresidentialPardonForm test("forgiven uwu");

		test.beSigned(guy);
		guy.executeForm(test);
	}
	catch (std::exception& e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}
