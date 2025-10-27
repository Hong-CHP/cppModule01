/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:32:47 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 11:07:46 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug()
{
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void	Harl::info()
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger!" << std::endl;
}

void	Harl::warning()
{
	std::cout << "I think I deserve to have some extra bacon for free." << std::endl;
}

void	Harl::error()
{
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void	Harl::complain(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*func[4])();
	func[0] = &Harl::debug;
	func[1] = &Harl::info;
	func[2] = &Harl::warning;
	func[3] = &Harl::error;
	int i = 0;
	while (i < 4)
	{
		if (level.compare(levels[i]) == 0)
			(this->*func[i])();
		i++;
	}
}