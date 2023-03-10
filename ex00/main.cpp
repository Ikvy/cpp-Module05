/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:56:32 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 10:57:11 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("a", 450);
		std::cout << a << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl; 
	}

	try
	{
		Bureaucrat b("b", 0);
		std::cout << b << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl; 
	}

	try
	{
		Bureaucrat c("c", 8);
		std::cout << c << std::endl;
		c.gradeUp(5);
		std::cout << c << std::endl;
		c.gradeDown(9);
		std::cout << c << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Exception caught : " << e.what() << std::endl; 
	}
}
