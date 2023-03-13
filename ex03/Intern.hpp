/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 09:45:37 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/13 10:53:26 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern& cpy);
		~Intern();
		Intern& operator=(const Intern& a);

		Form *makeForm(std::string name,const std::string& target);

		class UnknownNameException : public std::exception{
		public:
			 const char *what() const throw(){ return "unknown form name";};
		};
};
