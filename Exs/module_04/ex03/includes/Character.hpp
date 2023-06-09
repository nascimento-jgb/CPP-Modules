/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/27 16:38:47 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/30 10:55:56 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Stash.hpp"

class Character : public ICharacter
{
	private:
		std::string	_name;
		AMateria	*_spells[4];
		Stash		*_stash;

	public:
	//Canonical Form
		Character(void);
		Character(std::string name);
		Character(const Character &src);
		~Character(void);

	//Operator Overload
		Character			&operator=(const Character &src);

	//Getter and Setter
		void				setName(std::string name);
		std::string const	&getName(void) const;

	//Methods
		void				equip(AMateria *m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);
		void				addToStash(AMateria *m);
};

#endif
