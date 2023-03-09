/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:56:32 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/09 15:18:52 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	std::cout << "\ntest 1 : Bureaucrat too low\n";
	try
	{
		Bureaucrat test("test", 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 2 : Bureaucrat too high\n";
	try
	{
		Bureaucrat test("test", 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 3 : Bureaucrat OK\n";
	try
	{
		Bureaucrat test("test", 50);
		std::cout << test << std::endl; 
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 4 : Form too low\n";
	std::cout << "sign" << std::endl; 
	try
	{
		Form test("test", 151, 11);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << "exec" << std::endl; 
	try
	{
		Form test("test", 11, 151);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 5 : Form too high\n";
	std::cout << "sign" << std::endl; 
	try
	{
		Form test("test", 0, 11);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	std::cout << "exec" << std::endl; 
	try
	{
		Form test("test", 11, 0);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 6 : Form OK\n";
	try
	{
		Form test("test", 50, 50);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}


	std::cout << "\ntest 7 : Bureaucrat can't sign -> too high\n";
	try
	{
		Bureaucrat test("test", 50);
		Form form("form", 10, 10);
		std::cout << form << std::endl;
		test.signForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
	

	std::cout << "\ntest 8 : Bureaucrat can finally sign\n";
	try
	{
		Bureaucrat test("test", 50);
		Form form("form", 100, 100);
		std::cout << form << std::endl;
		test.signForm(form);
		std::cout << form << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl;
	}
}
