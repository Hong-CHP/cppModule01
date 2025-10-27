/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 10:32:24 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 11:07:12 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl earl;
	earl.complain("DEBUG");
	earl.complain("INFO");
	earl.complain("WARNING");
	earl.complain("ERROR");
	return (0);
}