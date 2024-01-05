/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 12:46:01 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/04 17:11:16 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <cstring>

int main(int argc, char **argv)		
{	
	char c;
	if (argc == 1)
	{
		std::cout << "CRIIIIIAAKKKKKKKKKKKKKKKKKKKKKK" << std::endl;
		return (0);
	}
	else
	{
		for (int i = 1; i < argc; i++)
		{
			for (int y = 0; y < argv[i][y]; y++)
			{
				c = toupper(argv[i][y]);
				std::cout << c;
			}
		}
	}
	return (0);
}