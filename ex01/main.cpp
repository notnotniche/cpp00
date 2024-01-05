/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:30:01 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/05 14:37:30 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

int main()
{
	std::string command;
	Phonebook myPhoneBook;
	myPhoneBook.Init();
	while(1)
	{
		if (std::getline(std::cin, command).fail() == true)
			break;
		if (command == "ADD")
			myPhoneBook.AddContact();
		else if (command == "EXIT")
			break;
		else if (command == "SEARCH")
			myPhoneBook.Search();
		else 
			std::cout << "WRONG INPUT TRY AGAIN !!" << std::endl;
	}
}