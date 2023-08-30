/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:38:19 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 13:56:06 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template <typename T, typename U>
void iter(T* arr, size_t len, U f)
{
	for (size_t i = 0; i < len; ++i)
		f(arr[i]);
}

template <typename T>
void print(T a)
{
	std::cout << a << ' ';
}
