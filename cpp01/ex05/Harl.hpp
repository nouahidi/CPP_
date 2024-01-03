/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 14:50:38 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/25 17:29:30 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Harl{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	NOT(void);
	public:
		Harl();
		~Harl();
	void	complain(std::string level);
};
