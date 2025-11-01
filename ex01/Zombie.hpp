/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:50:19 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 16:55:53 by hporta-c         ###   ########.fr       */
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
		Zombie();
		~Zombie();
		
		void setName(std::string name);
		void annonce(void);
};

Zombie	*zombieHorde(int N, std::string name);

#endif