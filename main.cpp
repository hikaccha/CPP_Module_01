/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hichikaw <hichikaw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 21:18:27 by hichikaw          #+#    #+#             */
/*   Updated: 2026/05/16 21:20:31 by hichikaw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *newZombie(std::string name);

void	randomChump(std::string name);

int	main(void)
{
	Zombie *z = newZombie("Alex");
	z->announce();
	randomChump("Bruno");
	delete z;
}
