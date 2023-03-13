/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmidon <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:04:45 by mmidon            #+#    #+#             */
/*   Updated: 2023/03/10 17:19:59 by mmidon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Form.hpp"

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm& a);

		std::string getTarget() const;
		void execute(Bureaucrat const& executor)const;
	private:
		std::string target;
};
