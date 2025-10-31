/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:29:02 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:50:10 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {};

void	HumanB::setWeapon(Weapon &newWeapon)
{
	weapon = &newWeapon;
}

void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with thier " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon!!!" << std::endl;
}