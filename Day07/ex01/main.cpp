/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:52:07 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/13 14:25:42 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.cpp"
#include <iostream>

int main(void)
{
	char str[9] = "fortytwo";
	int num[5] = {0, 1, 2, 3, 4};
	bool boo[5] = {true, true, false, true, false};
	std::cout << std::endl << "Passing \"fortytwo\":" << std::endl << std::endl;
	iter(str, 8, print<char>);
	std::cout << std::endl << "Passing \"0, 1, 2, 3, 4\":" << std::endl << std::endl;
	iter(num, 5, print<int>);
	std::cout << std::endl << "Passing \"true, true, false, true, false\":" << std::endl << std::endl;
	iter(boo, 5, print<bool>);
	return (0);
}