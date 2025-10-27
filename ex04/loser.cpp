/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 11:15:53 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 09:42:18 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "loser.hpp"

std::string	Loser::openOldFile()
{
	std::ifstream infile(filename.c_str(), std::ifstream::binary);
	if (!infile)
	{
		std::cerr << "File does not exist." << std::endl;
		return "";
	}
	infile.seekg(0, infile.end);
	std::streampos length = infile.tellg();
	std::size_t size = static_cast<std::size_t>(length);
	infile.seekg(0, infile.beg);
	if (length < 0 || size == 0 || !infile.good())
	{
		std::cerr << "File content is empty or unreadable." << std::endl;
		infile.close();
		return "";	
	}
	buffer.resize(size);
	infile.read(&buffer[0], size);
	infile.close();
	return (buffer);
}

std::string	Loser::replaceContent()
{
	if (buffer.empty())
		return "";
	std::size_t found = buffer.find(s1);
	std::size_t last = 0;
	while (found != std::string::npos)
	{
		dest.append(buffer, last, found - last);
		dest += s2;
		last = found + s1.length();
		found = buffer.find(s1, last);
	}
	if (last != std::string::npos)
	{
		dest.append(buffer, last, buffer.length() - last);
	}
	std::cout << dest << std::endl;
	return (dest);
}

int	Loser::getNewFile()
{
	if (buffer.empty() || dest.empty())
		return (0);
	std::ofstream outfile(newfile.c_str(), std::ofstream::binary);
	if (!outfile)
	{
		std::cerr << "File can not create." << std::endl;
		return (0);
	}
	outfile.write(dest.c_str(), dest.size());
	outfile.close();
	return (1);
}