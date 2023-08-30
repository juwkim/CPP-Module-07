/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:19:00 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 11:28:35 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

namespace juwon
{
	template <typename T>
	void swap(T& a, T& b)
	{
		T c = a;
		a = b;
		b = c;
	}

	template <typename T>
	const T& min(const T& a, const T& b) { return a < b ? a : b; }

	template <typename T>
	const T& max(const T& a, const T& b) { return a > b ? a : b; }
}