/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Person.class.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:29:54 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/05 15:52:42 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

Person::Person()
{
    
}

Person::~Person()
{
    
}

void Person::setFirstname(std::string firstName)
{
    _firstName = firstName;
}

std::string Person::getFirstname()
{
    return (_firstName);
}

void Person::setLastName(std::string lastName)
{
    _lastName = lastName;
}

std::string Person::getLastName()
{
    return (_lastName);
}

void Person::setNickName(std::string nickname)
{
    _nickname = nickname;
}

std::string Person::getNickName()
{
    return (_nickname);
}

void Person::setLogin(std::string login)
{
    _login = login;
}

std::string Person::getLogin()
{
    return (_login);
}

void Person::setPostal(std::string postal)
{
    _postal = postal;
}

std::string Person::getPostal()
{
    return (_postal);
}

void Person::setEmail(std::string email)
{
    _email = email;
}

std::string Person::getEmail()
{
    return (_email);
}

void Person::setPhone(std::string phone)
{
    _phone = phone;
}

std::string Person::getPhone()
{
    return (_phone);
}

void Person::setBirthDate(std::string birthDate)
{
    _birthdate = birthDate;
}

std::string Person::getBirthDate()
{
    return (_birthdate);
}

void Person::setMeal(std::string meal)
{
    _meal = meal;
}

std::string Person::getMeal()
{
    return (_meal);
}

void Person::setColour(std::string colour)
{
    _colour = colour;
}

std::string Person::getColour()
{
    return (_colour);
}

void Person::setSecret(std::string secret)
{
    _secret = secret;
}

std::string Person::getSecret()
{
    return (_secret);
}