/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 13:56:32 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/13 11:02:25 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"


int main()
{
	Intern random;
	Form* aled;

	aled = random.makeForm("robotomy request", "Bender");
	aled = random.makeForm("presidential pardon", "zoui");
	aled = random.makeForm("shrubbery creation", "znon");
	aled = random.makeForm("badabada", "badabada");

}
