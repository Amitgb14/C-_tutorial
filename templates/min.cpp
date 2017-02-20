/*
 * =====================================================================================
 *
 *       Filename:  min.cpp
 *
 *    Description:  min(a, b) - return minimum value
 *
 *        Version:  1.0
 *        Created:  02/20/2017 10:15:01 PM
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
min(const T& a, const T& b)
{
		return a < b ? a : b;
}

int main()
{
		assert(3==min(3, 5));
		std::cout << "Execution continues first assert min(3, 5)\n";
		assert(5==min(10, 5));
		std::cout << "Execution continues second assert min(10, 5)\n";

		return 0;
}

