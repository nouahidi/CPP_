/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:58:50 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/08 17:01:29 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact contact[8];
		int 	index;
	public:
	void	init_end();
	int		get_index();
	void		set_index(int ind);
	void	Add_Contact(std::string *inf, int index);
	void	get_contact(int index);
	void	Search_Contact(int index);
	Contact* getContacts();
		PhoneBook();
		~PhoneBook();
};

int	contact_data(PhoneBook & phone, int index);
int	ft_empty_str(std::string str);
