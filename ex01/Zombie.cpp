/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:49:58 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/24 12:16:29 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::setName(std::string name)
{
	this->name = name;
}

void Zombie::annonce(void)
{
	std::cout << name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}