/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:56:32 by mmidon            #+#    #+#             */
/*   Updated: 2023/02/28 15:56:34 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat a("a", 450);
	std::cout << a << std::endl; 
	Bureaucrat b("b", 0);
	std::cout << b << std::endl; 
	Bureaucrat c("c", 8);
	std::cout << c << std::endl;
}
