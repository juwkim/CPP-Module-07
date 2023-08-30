/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:22:21 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 11:43:10 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "whatever.hpp"

int main(void)
{
	{
		int a = 0, b = 1;

		std::cout << "before swap" << '\n';
		std::cout << "a = " << a << ", b = " << b << '\n';

		juwon::swap(a, b);
		std::cout << "After swap" << '\n';
		std::cout << "a = " << a << ", b = " << b << '\n';

		std::cout << "min(a, b) = " << juwon::min(a, b) << '\n';
		std::cout << "max(a, b) = " << juwon::max(a, b) << '\n';
	}
	std::cout << '\n';
	{
		std::string a = "ju", b = "won";

		std::cout << "before swap" << '\n';
		std::cout << "a = " << a << ", b = " << b << '\n';

		juwon::swap(a, b);
		std::cout << "After swap" << '\n';
		std::cout << "a = " << a << ", b = " << b << '\n';

		std::cout << "min(a, b) = " << juwon::min(a, b) << '\n';
		std::cout << "max(a, b) = " << juwon::max(a, b) << '\n';
	}
	return 0;
}
