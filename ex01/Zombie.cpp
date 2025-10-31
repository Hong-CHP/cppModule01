/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:49:58 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:39:30 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "Default constructor of Zombie" << std::endl;
}

void	Zombie::setName(std::string name)
{
	std::cout << "set the zombie name : " << name << std::endl;
	this->name = name;
}

void Zombie::annonce(void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}