/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:55:20 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/05 18:39:19 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact()
{
	
}

Contact::~Contact()
{
	
}
void Contact::PrintForSearch(std::string Value)
{
	std::string copy_value;
	if (Value.size() < 10 )
		std::cout << std::setfill(' ') << std::setw (10) <<  Value;
	else
	{
		copy_value = Value;
		copy_value.resize(10);
		copy_value.replace(9,1,1,'.');
		for (int i = 0; i < 9; i++)
			std::cout << Value[i];
		std::cout << ".";
	}	
}

void Contact::Printvalue()
{
	std::cout << "         "  << this->index <<  "|";
	PrintForSearch(firstname);
	std::cout << "|";
	PrintForSearch(lastname);
	std::cout << "|";
	PrintForSearch(surname);	
}
int Contact::SetContactFirstname()
{
	while(1)
	{
		std::cout << "Firstname:";
		if (std::getline(std::cin, firstname).fail() == true)
			return 1;
		if (firstname.size() != 0)
			return 0;
		std::cout << std::endl;
	}
}

int Contact::SetcontactLastname()
{
	while (1)
	{
		std::cout << "Lastname:";
		if (std::getline(std::cin, lastname).fail() == true)
			return 1;
		if (lastname.size() != 0)
			return 0;
		std::cout << std::endl;
	}

}

int Contact::SetContactSurname()
{
	while(1)
	{
		std::cout << "surname:";
		if (std::getline(std::cin, surname).fail() == true)
			return 1;
		if (surname.size() != 0)
			return 0;
		std::cout << std::endl;
	}
}

int Contact::SetDarkestSecret()
{
	while (1)
	{
		std::cout << "Secret:";
		if (std::getline(std::cin, darkestsecret).fail() == true)
			return 1;
		if (darkestsecret.size() != 0)
			return 0;
		std::cout << std::endl;
	}
}

int Contact::SetPhonenumber()
{
	int x;
	int i;

	x = 0;
	while (1)
	{
		std::cout << "Phone number:";
		if (std::getline(std::cin, phonenumber).fail() == true)
			return 1;
		for (i = 0;phonenumber[i]; i++)
		{
			if (phonenumber[i] < '0' || phonenumber[i] > '9')
			{
				std::cout << "Not valid Phonenumber please retry\n";
				break;
			}
		}
		if (phonenumber[i - 1] >= '0' && phonenumber[i - 1] <= '9')
			return (1);
		}
}

void Contact::SetAllContact(int index_x)
{
	index = index_x;
	if (SetContactFirstname() == 0)
	{
		if (SetcontactLastname() == 0)
		{
			if (SetContactSurname() == 0)
			{
				if (SetDarkestSecret() == 0)
				{
					if (SetPhonenumber() == 0)
					{
						std::cout << "CONTACT CREATED" << std::endl;
					}
				}
			}
		}
	}
}
void Contact::PrintAllValue()
{
	std::cout << firstname << std::endl << lastname << std::endl << surname << std::endl << darkestsecret << std::endl << phonenumber << std::endl;
}

std::string Contact::GetFirstname()
{
	return firstname;
}

std::string Contact::Getlastname()
{
	return lastname;
}

std::string Contact::Getsurname()
{
	return surname;
}