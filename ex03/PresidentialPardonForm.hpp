/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:47:09 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:20:20 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& cpy);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm& a);

		std::string getTarget() const;
		void execute(Bureaucrat const& executor)const;
	private:
		std::string target;
};

