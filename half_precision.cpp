//============================================================================
// Name        : half_precision.cpp
// Author      : Stefan Oprean
// Version     :
// Copyright   : (C)sop_made_this
// Description : Hello World in C, Ansi-style
//============================================================================

#include <stdio.h>
#include <stdlib.h>

#include <iostream>
#include <cmath>
#include <limits>
//#include <ios>

int main(void) {
	puts("Hello World!!!");

    double f = 1.d/121;
//    std::cout << "Given the number " << f << " or " << std::hexfloat
//              << f << std::defaultfloat << " in hex,\n";
    printf("Given the number %f or %a in hex,\n", f, f);

    double f3;
    double f2 = std::modf(f, &f3);
    std::cout << "modf() makes " << f3 << " + " << f2 << '\n';

    int i;
    f2 = std::frexp(f, &i);
    std::cout << "frexp() makes " << f2 << " * 2^" << i << '\n';

    i = std::ilogb(f);
    std::cout << "logb()/ilogb() make " << f/std::scalbn(1.0, i) << " * "
              << std::numeric_limits<double>::radix
              << "^" << std::ilogb(f) << '\n';


    // test value
    std::cout << (1<<13)-1 << std::endl;
    std::cout << (1<<12)-1 << std::endl;
	return EXIT_SUCCESS;
}
