/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/24 11:53:16 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/24 12:52:27 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// std::for_each(horde, horde + N, annonceZombie);
int main()
{
	int N = 3;
	Zombie *horde = zombieHorde(N, "chuchu");
	delete[] horde;
	return (0);
}