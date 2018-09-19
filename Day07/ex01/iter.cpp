/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:46:45 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/13 14:23:07 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void print(T const & elem){
  std::cout << elem << " passed" << std::endl; 
}

template< typename T >
void iter(T * array, int len, void (*f)(T const & elem)){
  for(int i = 0; i < len; i++){
    f(array[i]);
  }
}