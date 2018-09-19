/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/14 09:08:14 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/14 12:16:37 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
class Array{
    public:

    T **array;

    Array()
    {
        array = NULL;
        this->_size = 0;
    };

    Array(unsigned int n)
    {
        this->array = new T * [n];
        this->_size = n;
        for (unsigned int i = 0; i < n; i++)
        {
            this->array[i] = new T;
        }
    };

    Array(const Array & A)
    {
        *this = A; 
    };

    ~Array(){


    };

    Array<T> &operator=(const Array &rhs)
	{
		if (_size > 0) {
			for(unsigned int i = 0; i < this->_size; i++) {
				if (array[i] != NULL) {
					delete this->array[i];
				}
			}
			delete [] array;
		}

		array = new T * [rhs.size()];
		_size = rhs.size();
		for (unsigned int i = 0; i < this->_size; i++) {
			array[i] = new T;
			*array[i] = *rhs.array[i];
		}

		return *this;
	}

    T &operator[](int x)
    {
        if (static_cast<unsigned int>(x) <= this->_size)
		{
			return *array[x];
		}
		throw std::out_of_range("Array out of bounds");
    };
    
    unsigned int size() const
    {
            return (this->_size);
    }

    private: 
        unsigned int _size;
};
