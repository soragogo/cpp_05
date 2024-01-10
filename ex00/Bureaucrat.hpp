/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:47 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/10 18:37:20 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include <iostream>

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &brc);
		Bureaucrat &operator=(const Bureaucrat &brc);
		std::string getName() const;
		int getGrade() const;
	private:
		const std::string name;
		int grade;
};
