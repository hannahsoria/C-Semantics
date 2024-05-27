/**
 * bubbleSort.c
 * Hannah Soria
 * 3/22/2024
 * bubble sort in C
 */
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

//  bubbleSort(A[1...n])
//     for i = 1 to length[A] – 1
//         for j = length[A] downto i + 1 
//             if A[j] < A[j – 1]
//                 swap A[j] with A[j-1]

void bubbleSort(int array[], int n){
    for (int i = 0; i < n; i++){
        bool swap = false;
        for (int j = 1; j < n-1; j ++){
            if (array[j] < array[j-1]){
                int temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
                swap = true;
            }
        }
        if (!swap){
            break;
        }
    }
}

int main() {
    int example[] = {3, 6, 4, 7, 1, 9};
    int n = sizeof(example) / sizeof(example[0]);
    printf("array before sorting: ");
    for (int i =0; i < n; i++) {
        printf("%d ", example[i]);
    }
    printf("\n");

    bubbleSort(example, n);

    printf("array after sorting: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", example[i]);
    }
    printf("\n");
}

