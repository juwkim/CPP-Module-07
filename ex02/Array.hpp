/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:59:05 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 14:45:30 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdexcept>

template <typename T>
class Array
{
	public:
		virtual ~Array(void);
		Array(void);
		Array(const unsigned int n);
		Array(const Array& array);
		Array& operator=(const Array& array);

		unsigned int size(void) const;
		T&           operator[](const unsigned int n);
		const T&     operator[](const unsigned int n) const;
	private:
		unsigned int mSize;
		T*           mData;
};

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>&array);

#include "Array.tpp"
