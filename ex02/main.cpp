/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 09:36:23 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/06 11:31:46 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main()
{
    std::cout << "== operator tests ==" << std::endl;
    Fixed x(5);
    Fixed y(2);
    std::cout << "x = " << x << ", y = " << y << std::endl;

    std::cout << "x + y = " << (x + y) << std::endl;
    std::cout << "x - y = " << (x - y) << std::endl;
    std::cout << "x * y = " << (x * y) << std::endl;
    std::cout << "x / y = " << (x / y) << std::endl;

    if (!(x > y)) { std::cerr << "Test failed: expected x > y" << std::endl; return EXIT_FAILURE; }
    if (!(y < x)) { std::cerr << "Test failed: expected y < x" << std::endl; return EXIT_FAILURE; }
    if (!(x >= y)) { std::cerr << "Test failed: expected x >= y" << std::endl; return EXIT_FAILURE; }
    if (!(y <= x)) { std::cerr << "Test failed: expected y <= x" << std::endl; return EXIT_FAILURE; }
    if ( (x == y) ) { std::cerr << "Test failed: expected x != y (== returned true)" << std::endl; return EXIT_FAILURE; }
    if (!(x != y)) { std::cerr << "Test failed: expected x != y" << std::endl; return EXIT_FAILURE; }

    std::cout << "\n== increment/decrement tests ==" << std::endl;
    Fixed c(0);
    std::cout << "c = " << c << std::endl;
    std::cout << "++c = " << ++c << std::endl;
    std::cout << "c++ = " << c++ << std::endl;
    std::cout << "c = " << c << std::endl;
    std::cout << "--c = " << --c << std::endl;
    std::cout << "c-- = " << c-- << std::endl;
    std::cout << "c = " << c << std::endl;

    std::cout << "\n== min/max tests ==" << std::endl;
    std::cout << "max(x,y) = " << Fixed::max(x, y) << ", min(x,y) = " << Fixed::min(x, y) << std::endl;

    std::cout << "\n== division by zero test  ==" << std::endl;
    Fixed zero(0);
    std::cout << "About to perform x / 0 -> assertion expected" << std::endl;
    Fixed bad = x / zero; 
    
    return 0;
}