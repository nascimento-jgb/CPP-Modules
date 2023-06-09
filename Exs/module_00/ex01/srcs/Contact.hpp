/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/15 16:42:32 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/17 09:49:48 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>
#include <string>

class Contact
{
	public:

		Contact(void);
		~Contact(void);

		void	setName(std::string str) ;
		void	setLastName(std::string str);
		void	setNickname(std::string str);
		void	setPhoneNumber(std::string str);
		void	setSecret(std::string str);
		std::string	getName(void) const;
		std::string	getLastName(void) const;
		std::string	getNickname(void) const;
		std::string	getPhoneNumber(void) const;
		std::string	getSecret(void) const;

	private:

		std::string	_name;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
};

#endif
