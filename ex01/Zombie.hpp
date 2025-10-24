/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:50:19 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/24 12:52:38 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

# include <iostream>
# include <algorithm>

class Zombie
{
	private:
		std::string name;
	public:
		void setName(std::string name);
		void annonce(void);
		~Zombie() {
			std::cout << name << " is destroyed!" << std::endl;
		};
};

Zombie	*zombieHorde(int N, std::string name);
// void 	annonceZombie(Zombie &x);

#endif