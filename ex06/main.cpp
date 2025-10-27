/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 11:12:08 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 11:27:22 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return (1);
	std::string momo;
	momo = argv[1];
	Harl earl;
	earl.complain(momo);
	return (0);
}