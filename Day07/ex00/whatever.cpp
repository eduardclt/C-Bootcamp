/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 13:46:45 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/13 13:56:35 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>


template< typename T >
T const & max(T & a, T & b){
  return (a<=b ? b : a);
}

template< typename T >
T const & min(T & a, T & b){
  return (a>=b ? b : a);
}

template< typename T > 
void swap ( T & a, T & b )
{
  T c;
  c = a;
  a = b; 
  b = c;
}