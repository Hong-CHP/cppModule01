/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/23 14:27:11 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/31 11:30:57 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	randomChump("stack");
	Zombie *heapZombie = newZombie("heap");
	heapZombie->annonce();
	delete heapZombie;
	return (0);
}