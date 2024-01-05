/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 15:43:33 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/05 18:24:25 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>
#include <string>
#include <iomanip> 
#include <string_view>

class Contact
{
	public:
		Contact();
		~Contact();
		void Printvalue();
		int SetContactFirstname();
		int SetcontactLastname();
		int SetContactSurname();
		int SetPhonenumber();
		int SetDarkestSecret();
		void PrintForSearch(std::string Value);
		void SetAllContact(int index_x);
		std::string GetFirstname();
		std::string Getlastname();
		std::string Getsurname();
		void PrintAllValue();
		int			index;
	private:
		std::string firstname;
		std::string lastname;
		std::string surname;
		std::string	phonenumber;
		std::string darkestsecret;
};

#endif
