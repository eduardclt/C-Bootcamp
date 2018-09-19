/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:52:07 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/14 12:15:21 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>
#include <string>

#include "array.hpp"

int main() {
	Array<int> arr = Array<int>(20);

	for (unsigned int i = 0; i < arr.size(); i++){
		arr[i] = i;
	}

	for (unsigned int i = 0; i < arr.size(); i++){
		std::cout << arr[i] << ", ";
	}

	std::cout << '\n';

	try {
		std::cout << arr[69];
	}
	catch (std::exception &e){
		std::cout << e.what() << '\n';
	}


	return 0;
}