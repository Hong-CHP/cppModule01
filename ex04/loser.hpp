/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   loser.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hporta-c <hporta-c@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/25 09:52:07 by hporta-c          #+#    #+#             */
/*   Updated: 2025/10/27 09:38:56 by hporta-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOSER_HPP
# define LOSER_HPP

# include <iostream>
# include <fstream>

class	Loser {
	private:
		std::string filename;
		std::string buffer;
		std::string dest;
		std::string s1;
		std::string s2;
		std::string newfile;
	public:
		Loser(const std::string& infile, const std::string& str1, const std::string& str2)
			: filename(infile), s1(str1), s2(str2), newfile(filename + ".replace") {};
		std::string openOldFile();
		std::string replaceContent();
		int getNewFile();
		~Loser()
		{
			if (getNewFile() != 0)
				std::cout << "all is destroyed and deleted..." << std::endl;
		}
};

#endif