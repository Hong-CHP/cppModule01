/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 14:38:03 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/24 17:18:25 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
	private:
		std::string type;
	public:
		Weapon(std::string newType) : type(newType) {};
		void setType(const std::string &newType);
		const std::string& getType() const ;
};

#endif