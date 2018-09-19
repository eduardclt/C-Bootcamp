/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 12:09:34 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/05 15:52:30 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "phonebook.hpp"

Person	add(){
    Person person;
    std::string buff;
    std::cout << "First Name: ";
    getline(std::cin, buff);
    person.setFirstname(buff);

    std::cout << "Last Name: ";
    getline(std::cin, buff);
    person.setLastName(buff);

    std::cout << "Nickname: ";
    getline(std::cin, buff);
    person.setNickName(buff);

    std::cout << "Login: ";
    getline(std::cin, buff);
    person.setLogin(buff);

    std::cout << "Postal: ";
    getline(std::cin, buff);
    person.setPostal(buff);

    std::cout << "Email: ";
    getline(std::cin, buff);
    person.setEmail(buff);

    std::cout << "Phone: ";
    getline(std::cin, buff);
    person.setPhone(buff);

    std::cout << "Date of birth: ";
    getline(std::cin, buff);
    person.setBirthDate(buff);

    std::cout << "Favourite meal: ";
    getline(std::cin, buff);
    person.setMeal(buff);

    std::cout << "Underwear Colour: ";
    getline(std::cin, buff);
    person.setColour(buff);

    std::cout << "Darkest Secret: ";
    getline(std::cin, buff);
    person.setSecret(buff);

    return person;
}

std::string	trunk(std::string str) {
	if (str.length() > 10) {
		str.replace(9, str.length(), ".");
	}
	return (str);
}

void	search(Person  person_array[8], int num_people){
    std::string input_str;
    int j;
    char search_num;
    
    std::cout << std::right << std::setw(10) << trunk("No.") << " | ";
    std::cout << std::right << std::setw(10) << trunk("First Name") << " | ";
    std::cout << std::right << std::setw(10) << trunk("Last Name") << " | ";
    std::cout << std::right << std::setw(10) << trunk("Nickname") << " | " << std::endl;
    for (int i = 0; i < num_people; i++){
        std::cout << std::right << std::setw(10) << i << " | ";
        std::cout << std::right << std::setw(10) << trunk(person_array[i].getFirstname()) << " | ";
        std::cout << std::right << std::setw(10) << trunk(person_array[i].getLastName()) << " | ";
        std::cout << std::right << std::setw(10) << trunk(person_array[i].getNickName()) << " | " << std::endl;
    }
    std::cout << "Please give an No. to display the relevant details: ";
    std::getline(std::cin, input_str);
    search_num = input_str[0];
    if(isdigit(search_num)){
        j = std::atoi(input_str.c_str());
        if (j >= 0 && j < num_people){
            std::cout << "First Name: " << person_array[j].getFirstname() << std::endl;
            std::cout << "Last Name: " << person_array[j].getLastName() << std::endl;
            std::cout << "Nickname: " << person_array[j].getNickName() << std::endl;
            std::cout << "Login: " << person_array[j].getLogin() << std::endl;
            std::cout << "Postal: " << person_array[j].getPostal() << std::endl;
            std::cout << "Email: " << person_array[j].getEmail() << std::endl;
            std::cout << "Phone: " << person_array[j].getPhone() << std::endl;
            std::cout << "Date of birth: " << person_array[j].getBirthDate() << std::endl;
            std::cout << "Faourite meal: " << person_array[j].getMeal() << std::endl;
            std::cout << "Underwear Colour: " << person_array[j].getColour() << std::endl;
            std::cout << "Darkest Secret: " << person_array[j].getSecret() << std::endl; 
        }
        else
            std::cout << "You did not enter a number between 0 and " << num_people-1 << std::endl;
    }
    else
        std::cout << "You did not enter a digit." << std::endl;
}

int main(int argc, char **argv)
{
    int m = 1;
    int num_people = 0;
    Person people[8];
    std::string cmd;

    
    while(m)
    {
        std::cout << "Please use 'ADD' 'SEARCH' or 'EXIT'." << std::endl;
        getline(std::cin, cmd); 
        if (cmd == "ADD" || cmd == "add")
        {
            if (num_people < 8){
                people[num_people] = add();
                num_people++;
            }
            else
                 std::cout << "Error: Already 8 contacts." << std::endl;
        }
        else if (cmd == "SEARCH" || cmd == "search")
        {
            if (num_people != 0){
                search(people, num_people);
           }
        }
        else if (cmd == "EXIT" || cmd == "exit")
        {
            m = 0;
            break;
        }
        else
        {
            std::cout << "Unknown command, please use 'ADD' 'SEARCH' or 'EXIT'" << std::endl;
        }
    }
    return (0);
}