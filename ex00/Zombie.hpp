/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:28:21 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:25:16 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Zombie_HPP
# define Zombie_HPP

# include <iostream>

class Zombie
{
	private:
		std::string name;
	public:
		Zombie(std::string name);
		void annonce (void);
		~Zombie();
};

Zombie *newZombie(std::string name);
void	randomChump(std::string name);

#endif