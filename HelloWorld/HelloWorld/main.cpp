//
//  main.cpp
//  HelloWorld
//
//  Created by Ulrich Nilsson on 2018-12-13.
//  Copyright © 2018 Ulrich Nilsson. All rights reserved.
//
/*
#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}
*/
//int fibonacci (int x,int y) {
//    return (x + y);
//}

/*
 /*
#include <stdio.h>

int main()
{
    int i = 0;
    int f0 = 0;
    int f1 = 1;
    int fib=0;
    
    while (i < 6) {
        i=i+1;
        printf ("%i ", fib);
        f0=f1;
        f1=fib;
        fib=f0+f1;
    }
    getchar();
    return 0;
}
 */
/*
#include <stdio.h>

int main() {
    int fib0 = 0;
    int fib1 = 1;
    printf("%i\n", fib0);
    printf("%i\n", fib1);
    
    int fib;
    for (int n = 1; n <= 4; n++)
    {
        fib = fib0 + fib1;
        printf("%i\n", fib);
        fib0 = fib1;
        fib1 = fib;
    }
}

*/

#include <stdio.h>

int main() {
    int fib0 = 0;
    int fib1 = 1;
    printf("%i\n", fib0);
    printf("%i\n", fib1);
    
    int fib;
    for (int n = 1; n <= 4; n++)
    {
        fib = fib0 + fib1;
        printf("%i\n", fib);
        fib0 = fib1;
        fib1 = fib;
    }
}
