/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 15:01:30 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:50:21 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <iostream>

//humanB 创建的时候不一定有武器，所以是一个新对象，是一个指针类型， 初始化NULL
// 只有在设置武器以后，这个新的武器会被赋值给这个指针 
class	HumanB {
	private:
		std::string name;
		Weapon *weapon;
	public:
		HumanB(std::string name);
		void setWeapon(Weapon &newweapon);
		void attack();
};

#endif