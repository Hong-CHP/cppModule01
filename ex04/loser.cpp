/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:15:53 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/26 17:55:26 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

std::string	Loser::openOldFile()
{
	std::ifstream oldFile(filename.c_str(), std::ifstream::binary);
	if (!oldFile)
	{
		std::cerr << "File does not exist." << std::endl;
		return "";
	}
	oldFile.seekg(0, oldFile.end);
	std::streampos length = oldFile.tellg();
	std::size_t size = static_cast<std::size_t>(length);
	oldFile.seekg(0, oldFile.beg);
	if (length < 0 || size == 0 || !oldFile.good())
	{
		std::cerr << "File content is empty or unreadable." << std::endl;
		oldFile.close();
		return "";	
	}
	buffer.resize(size);
	oldFile.read(&buffer[0], size);
	oldFile.close();
	std::cout << buffer << std::endl;
	return (buffer);
}

std::string	Loser::replaceContent()
{
	
}
