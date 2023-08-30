/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:39:51 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 13:57:13 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int	main(void)
{
	char char_arr[] = {'j', 'u', 'w', 'o', 'n'};

	std::cout << "Char: ";
	iter(char_arr, sizeof(char_arr) / sizeof(char), print<char>);
	std::cout << '\n';

	int	int_arr[] = {1, 2, 3, 4, 5};

	std::cout << "Int: ";
	iter(int_arr, sizeof(int_arr) / sizeof(int), print<int>);
	std::cout << '\n';

	float float_arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};

	std::cout << "Float: ";
	iter(float_arr, sizeof(float_arr) / sizeof(float), print<float>);
	std::cout << '\n';
	return 0;
}
