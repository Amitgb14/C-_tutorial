/*
 * =====================================================================================
 *
 *       Filename:  max.cpp
 *
 *    Description:  max() template
 *
 *        Version:  1.0
 *        Created:  02/20/2017 10:07:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <iostream>
#include <cassert>

template <typename T>
const T&
max(const T& a, const T& b)
{
		return a > b ? a : b; 
}

int main()
{
		assert(8==max(5, 8));
		std::cout << "Execution continues first assert max(5, 8)" << '\n';
		assert(10==max(10, 5));
		std::cout << "Execution continues second assert max(10, 5)" << '\n';

		return 0;
}

