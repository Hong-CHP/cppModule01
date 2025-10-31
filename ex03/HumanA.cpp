/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:27:25 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:48:43 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack()
{
	std::cout << name << " attacks with thier " << weapon.getType() << std::endl;
}

HumanA::~HumanA() {
	// std::cout << "HumanA " << name << " is destroyed" << std::endl;
}