/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 10:21:30 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/09 15:15:05 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

class Form; ///forward declaration uwu

class Bureaucrat{

	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat& cpy);
		~Bureaucrat();
		Bureaucrat&		operator=(const Bureaucrat& a);

		std::string		getName() const;
		unsigned int	getGrade() const;
		void			signForm(Form &form);

		class GradeTooHighException : public std::exception{
		public:
			 const char *what() const throw(){ return "grade too high";};
		};
		class GradeTooLowException : public std::exception{
		public:
			 const char *what() const throw(){ return "grade too low";};
		};

	private:
		std::string		name;
		unsigned int	grade;
};

std::ostream& operator<<(std::ostream& ostream, Bureaucrat const &f);
