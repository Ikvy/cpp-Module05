/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 16:29:58 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/09 15:12:58 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>
//#include "Bureaucrat.hpp"

class Bureaucrat; //uwu bis

class Form {

	public:
		//canon Form
		Form(const std::string name, unsigned int signGrade, unsigned int execGrade);
		Form(const Form& cpy);
		~Form();
		Form& operator=(const Form& a);

		//access
		const std::string getName() const;
		unsigned int getIsSigned() const;
		unsigned int getSignedGrade() const;
		unsigned int getExecGrade() const;

		//set
		void beSigned(const Bureaucrat& who);
		
		//exeptions
		class GradeTooHighException : public std::exception{
				   public:
					   const char *what() const throw(){ return "grade too high";};
		};

		class GradeTooLowException : public std::exception{
				   public:
					   const char *what() const throw(){ return "grade too low";};
		};

	private:
		const std::string name;
		bool isSigned;
		const unsigned int signGrade;
		const unsigned int execGrade;
};

std::ostream& operator<<(std::ostream& ostream, Form const &f);
