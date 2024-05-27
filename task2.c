/**
 * task2.c
 * takes in an integer argument and returns its factorial value as an integer
 *
 * Hannah Soria
 * 3/21/24
 * 
 */

#include <stdio.h>
#include <stdlib.h>

// return the factorial of a given value
int factorial (int value){
    int total = 1;  // hold the total value
    for(int i=1;i<=value;i++){ // iterate to the value of the parameter
        total = total*i; // computate the factorial
    }
    return total;
}

// inital way to do this
// int main() {
//     int (*calc)(int); // declaring a pointer to a function that takes an int argument and returns an int
//     calc = &factorial; // assigning the address of the factorial function to calc
//     int result = calc(5); // calling the function using the pointer
//     printf("Factorial of 5 is: %d\n", result);

//     return 0;
// }

// updated main
int main(int agrc, char *argv[]){ // agrc = argument count, argv = the command line input
    if (agrc >1){ // if an argument is given
        int (*calc)(const int) = factorial; // assigning calc to factorial function
        int result = atoi(argv[1]); //  atoi = ASCII to integer of the agrv
        printf("factorial of %u is %u", result, calc(result)); // print the result
    }
}