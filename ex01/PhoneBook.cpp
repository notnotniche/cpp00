/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:11:29 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/05 18:29:46 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"

Phonebook::Phonebook(){
	std::cout << "PHONEBOOK CREATED" << std::endl;
}

Phonebook::~Phonebook()
{
	std::cout << std::endl << "PHONEBOOK DESTROYED" << std::endl;
}

void Phonebook::Init()
{
	currentsize = 0;
	nContact = 0;
}

void Phonebook::AddContact()
{
	nContact = nContact % 8;
	contacts[nContact].SetAllContact(nContact);
	contacts[nContact].index = nContact;
	nContact++;
	if (currentsize != 8)
		currentsize++;
}

 void Phonebook::Search()
{
	int userInput;
	std::string string_to_int;
	for (int i = 0; i < currentsize ; i++)
	{
		contacts[i].Printvalue();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << "ENTER A VALID INDEX TO SEARCH FOR MORE INFO" << std::endl;
	std::getline(std::cin, string_to_int);
	std::stringstream ss;
	ss << string_to_int;
    if (!(ss >> userInput)) {
        std::cerr << "Invalid input. Please enter a valid integer." << std::endl;
        return; 
    }
	if (userInput < currentsize)
	{
		contacts[userInput].PrintAllValue();
	}
	else
	{
		std::cout << " OUT OF RANGE , NOT IN THE PHONEBOOK USE SEARCH FUNCTION AGAIN" << std::endl;
	}
	
}