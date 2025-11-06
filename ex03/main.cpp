/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nbaidaou <nbaidaou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 10:20:00 by nbaidaou          #+#    #+#             */
/*   Updated: 2025/11/06 11:29:47 by nbaidaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

int main()
{
    Point a(Fixed(0), Fixed(0));
    Point b(Fixed(10), Fixed(0));
    Point c(Fixed(0), Fixed(10));

    Point inside(Fixed(1), Fixed(1));
    Point outside(Fixed(10), Fixed(10));
    Point edge(Fixed(0), Fixed(5));

    std::cout << "inside: " << (bsp(a, b, c, inside) ? "true" : "false") << std::endl;
    std::cout << "outside: " << (bsp(a, b, c, outside) ? "true" : "false") << std::endl;
    std::cout << "edge: " << (bsp(a, b, c, edge) ? "true" : "false") << std::endl;

    return 0;
}
