/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nklingsh <nklingsh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 13:54:43 by nklingsh          #+#    #+#             */
/*   Updated: 2024/01/05 15:00:11 by nklingsh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

# include <iostream>
# include <sstream>
# include <string>
# include "Contact.hpp"

class Phonebook
{
	public : 
		Phonebook();
		~Phonebook();
		void AddContact();
		void Init();
		void Search();
	private :
		Contact contacts[8];
		int		currentsize;
		int	nContact;
		
	
	
};
#endif