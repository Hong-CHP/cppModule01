/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:50:28 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 09:45:54 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
		return (1);
	if (!argv[1] || !*argv[1]
		|| !argv[2] || !*argv[2]
		|| !argv[3])
	{
		std::cerr << "Empty argument!" << std::endl;
		return (1);
	}
	Loser loser(argv[1], argv[2], argv[3]);
	loser.openOldFile();
	loser.replaceContent();
	loser.getNewFile();
	return (0);
}