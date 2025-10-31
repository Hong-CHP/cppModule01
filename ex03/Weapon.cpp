/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:53:26 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:53:54 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType) : type(newType) {};

void	Weapon::setType(const std::string &newType)
{
	this->type = newType;
}

const std::string& Weapon::getType() const
{
	return type;
}