/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 13:46:18 by jonascim          #+#    #+#             */
/*   Updated: 2023/04/26 08:35:53 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "PhoneBook_utils.hpp"

int main()
{
	PhoneBook 	instance;
	std::string	command;
	int			choice;

	while (1)
	{
		std::cout << "\n\t\t\t   MAIN MENU                           " << std::endl;
		std::cout << "\t=============================================" << std::endl;
		std::cout << "\t   Type ADD to insert a new contact          " << std::endl;
		std::cout << "\t   Type SEARCH to find info about contacts   " << std::endl;
		std::cout << "\t   Type EXIT to finalize the program         " << std::endl;
		std::cout << "\t=============================================" << std::endl;
		std::cout << "\t" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.eof())
			return 0;
		if (command == "ADD")
			choice = 1;
		else if (command == "SEARCH")
			choice = 2;
		else if (command == "EXIT")
			choice = 3;
		else
			choice = 4;
		switch (choice)
		{
			case 1:
				instance.addPhoneBook();
				break;
			case 2:
				instance.searchPhoneBook();
				break;
			case 3:
				return (0);
				break;
			default:
				std::cout << "\tInvalid choice, try again!" << std::endl;
		}
	}
	return (0);
}
