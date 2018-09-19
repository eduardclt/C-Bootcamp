/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 14:25:03 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/05 11:51:17 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include <iostream>

 int main(int argc, char **argv){

     int    k;
     char   d = '\0';

    if (argc > 1)
    {
        for (int j = 1; j < argc; j++)
        {
            k = 0;
            while (argv[j][k] != '\0')
            {
                d = std::toupper(argv[j][k]);
                std::cout << d;
                k++;
            }
        }
        
    }
    else
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    }
    std::cout << std::endl;
    return (0);
 }
