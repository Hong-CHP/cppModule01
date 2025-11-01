/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:27:25 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 17:06:05 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
	std::cout << "HumanA " << name << " is created with weapon : " << weapon.getType() << std::endl;
}

void HumanA::attack()
{
	std::cout << name << " attacks with thier " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	// std::cout << "HumanA " << name << " is destroyed" << std::endl;
}