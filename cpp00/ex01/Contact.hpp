/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nouahidi <nouahidi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:58:31 by nouahidi          #+#    #+#             */
/*   Updated: 2023/09/11 20:47:27 by nouahidi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #pragma once
#include <iostream>
#include <string>
#include <vector>

class Contact{
	private:
		std::string first_name;
		std::string last_name;
		std::string nickname;
		std::string phone_number;
		std::string darkest_secret;
        int         index;
	public:
		Contact();
		~Contact();
		void set_index(int index);
		void set_first_name(std::string str);
		void set_last_name(std::string str);
		void set_nickname(std::string str);
		void set_phone_number(std::string str);
		void set_darkest_secret(std::string str);
		int		get_index();
		std::string get_first_name();
		std::string get_last_name();
		std::string get_nickname();
		std::string get_phone_number();
		std::string get_darkest_secret();
};
