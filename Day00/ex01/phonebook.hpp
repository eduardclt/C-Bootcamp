/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:31:01 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/05 15:52:18 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PERSON_H
# define PERSON_H

#include <iomanip>
#include <iostream>
#include <string>

class Person {
	public:
	Person();
	~Person();
	void setFirstname(std::string firstName);
	std::string getFirstname();

	void setLastName(std::string lastName);
	std::string getLastName();

	void setNickName(std::string nickname);
	std::string getNickName();

	void setLogin(std::string login);
	std::string getLogin();

	void setPostal(std::string postal);
	std::string getPostal();

	void setEmail(std::string email);
	std::string getEmail();

	void setPhone(std::string phone);
	std::string getPhone();

	void setBirthDate(std::string birthdate);
	std::string getBirthDate();

	void setMeal(std::string meal);
	std::string getMeal();

	void setColour(std::string colour);
	std::string getColour();

	void setSecret(std::string secret);
	std::string getSecret();

private:
	std::string _firstName;
	std::string _lastName;
	std::string _nickname;
	std::string _login;
	std::string _postal;
	std::string _email;
	std::string _phone;
	std::string _birthdate;
	std::string _meal;
	std::string _colour;
	std::string _secret;
};

Person	add();
void	search(Person con, int index);
int		main(int argc, char** argv);
#endif