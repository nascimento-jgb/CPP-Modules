/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 10:16:43 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 15:29:07 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	private:

		Brain	*brain;

	public:
		//canonical form
		Cat(void);
		Cat(std::string type);
		Cat(const Cat &cpy);
		virtual ~Cat(void);

		//Operator overload
		Cat		&operator=(const Cat &src);

		//Getter and Setter
		void		setType(std::string type);
		std::string	getType(void) const;
		Brain		&getBrain(void) const;

		//Method
		void		makeSound(void) const;
};

#endif
