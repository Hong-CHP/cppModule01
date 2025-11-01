/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:27:11 by hporta-c          #+#    #+#             */
/*   Updated: 2025/11/01 16:52:44 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("stack");
	std::cout << std::endl;
	Zombie *heapZombie = newZombie("heap");
	heapZombie->annonce();
	delete heapZombie;
	return (0);
}