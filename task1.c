/**
 * task1.c
 * Given an array of random integers, sort it in such a way that the even 
 * numbers appear first and the odd numbers appear later. The even numbers 
 * should be sorted in descending order and the odd numbers should be sorted 
 * in ascending order.
 *
 * Updated by: Hannah Soria
 * 3/21/24
 * 
 * Ying Li
 * 08/02/2016
 */

#include <stdio.h>
#include <stdlib.h>

/* the comparator funciton used in qsort */
int comparator (const void *p, const void *q) {
	// Your code here
    int val1 = *((int *)p); // a pointer to the first value to be compared
    int val2 = *((int *)q); // a pointer to the second value to be compared

    if(val1%2 == 0){    //if value 1 is even
        if(val2%2 == 0){    // if value 2 is even
            return (val2 - val1); // we want even number first and descending so if val2 bigger it
                                // will return positive and therefore will be sorted in descending order  
        } else { // if val1 is even and val2 is odd we want val1 to be first therefore return negative
            return  -1;
        }

    } else {        // if value 1 is odd
        if(val2%2 != 0){    // if value 2 is also odd
            return (val1 - val2); // we want odd number second and ascending so if val1 is bigger it
                                // will return postive and therefore will be sorted in descending order
        } else { // if val1 is odd and val2 is even we want val 1 to be second therefore return positive
            return 1;
        }
    }
}

int main (int argc, char **argv) {
	int ary[] = {10, 11, 1, 8, 9, 0, 13, 4, 2, 7, 6, 3, 5, 12};
	
	int size = sizeof(ary) / sizeof(int);
	
	qsort((void *) ary, size, sizeof(int), comparator);
	
	printf("The sorted array is: ");
	for (int i = 0; i < size; i++) {
		printf("%d ", ary[i]);
	}
	printf("\n");
	
	return 0;
}