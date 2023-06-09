/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jonascim <jonascim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/29 11:22:37 by jonascim          #+#    #+#             */
/*   Updated: 2023/05/27 15:27:57 by jonascim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_H
# define BRAIN_H

#include <iostream>

class Brain
{
	private:

		std::string ideas[100];

	public:

		Brain(void);
		Brain(const Brain &cpy);
		~Brain(void);

		Brain &operator=(const Brain &src);

		std::string	getIdea(unsigned int index);
		void		setIdea(unsigned int index, std::string idea);
};

#endif
