/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juwkim <juwkim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:59:42 by juwkim            #+#    #+#             */
/*   Updated: 2023/08/30 14:56:47 by juwkim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::~Array(void)
{
	delete[] mData;
}

template <typename T>
Array<T>::Array(void)
	:mSize(0)
{
	mData = new T[mSize];
}

template <typename T>
Array<T>::Array(const unsigned int n)
	:mSize(n)
{
	mData = new T[mSize];
}

template <typename T>
Array<T>::Array(const Array& array)
	:mSize(array.mSize)
{
	mData = new T[mSize];
	for (unsigned int i = 0, end = mSize; i < end; ++i)
		mData[i] = array.mData[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& array)
{
	this->~Array();
	new (this) Array(array);
	return *this;
}

template <typename T>
unsigned int Array<T>::size(void) const
{
	return mSize;
}

template <typename T>
T& Array<T>::operator[](const unsigned int n)
{
	if (n >= mSize)
		throw std::out_of_range("out of range");
	return mData[n];
}

template <typename T>
const T& Array<T>::operator[](const unsigned int n) const
{
	if (n >= mSize)
		throw std::out_of_range("out of range const");
	return mData[n];
}

template <typename T>
std::ostream& operator<<(std::ostream& out, const Array<T>& array)
{
	if (array.size() >= 1)
		out << array[0];
	for (unsigned int i = 1, end = array.size(); i < end; ++i)
		out << " " << array[i];
	return out;
}
