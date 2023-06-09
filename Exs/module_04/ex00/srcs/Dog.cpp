/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:37:41 by jonascim          #+#    #+#             */
/*   Updated: 2023/03/29 10:45:04 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Dog.hpp"

//Canonical form
Dog::Dog(void)
{
	this->_type = "Dog";
	std::cout << "Dog default constructor being called" << std::endl;
	return ;
}

Dog::Dog(std::string type)
{
	type = "Dog";
	this->_type = type;
	std::cout << "Dog constructor called and initializing type by parameter passed" << std::endl;
	return ;
}

Dog::Dog(const Dog &cpy)
{
	std::cout << "Dog copy constructor being called" << std::endl;
	*this = cpy;
	return ;
}

Dog::~Dog(void)
{
	std::cout<< "Dog destructor being called" << std::endl;
	return ;
}

//Operator
Dog	&Dog::operator=(const Dog &src)
{
	this->_type = src._type;
	return (*this);
}

//Getter and Setter
void	Dog::setType(std::string type)
{
	this->_type = type;
	return ;
}

std::string Dog::getType(void) const
{
	return (this->_type);
}

//Method
void	Dog::makeSound(void) const
{
	std::cout << "Bark! Bark! Bark!" << std::endl;
	return ;
}
