/**
 * cstk.c
 * Hannah Soria
 * 3/4/2024
 * 
 * create a stack that implements a heap in memory
 * 
 */

#include "cstk.h"
#include <stdio.h>
#include <stdlib.h>

Stack *stk_create(int cap) {
    Stack *stack = (Stack *)malloc(sizeof(Stack));
    stack->data = (void *)malloc(cap * sizeof(int));
    stack->top = stack->data;
    stack->capacity = cap;
    return stack;
}

void stk_destroy(Stack *stack){
    if (stack != NULL){
        free(stack->data);
        free(stack);
    }  
}

int stk_size(Stack *stack){
    return stack->top - stack->data;

}

void stk_push(Stack *stack, void *item){
    if (stk_full(stack)){
        printf("warning: stack is full"); 
    } else {
        *(stack->top) = item;
        stack->top += 1;
    }
}

void *stk_peek(Stack *stack){
    if(!(stk_empty(stack))){
        return *(stack->top-1);
    } else{
        printf("peek warning: no value at top of stack\n");
        return NULL;
    }

}

void *stk_pop(Stack *stack){
    if(!stk_empty(stack)){
            void *pop_ele = *(stack->top-1);
            stack->top--;
            return pop_ele;
        } else {
            printf("pop warning: no value at top of stack\n");
            return 0;
        }
    
}

char *stk_toString(Stack *stack, char *(*toString)(void *)){
    // memory for the output string
    char *output = (char *)malloc(1); // Start with 1 byte
    output[0] = '\0'; // create empty output array -> this will hold the strings
    int total_length = 1; // Length of the output
    int size = stk_size(stack); // size of stack

    // Loop through each element in the stack
    for (int i = 0; i < size; i++) { 
        void *element = stack->data[i]; // retrieve address of current element
        char *str = toString(element); // convert the element to string
        int str_len = strlen(str); // length of current string

        // Reallocate memory for the output string to accommodate the new element
        char *output_str = realloc(output, total_length + str_len + 2); // +2 for comma and space (element, total size)
        output = output_str; // replace output in array with the reallocated memory

        // move the string into the reallocated memory
        strcat(output, str); // concatenates the destination string and the source string, and the result is stored in the destination string
        total_length += str_len; // add together the lengths

        // Add a comma and space if it's not the last element
        if (i < size - 1) {
            strcat(output, ", "); // Add a comma and space
            total_length += 2; // increase length
        }
        free(str); // Free the memory allocated for the string representation
    }
    return output;
}


int stk_empty(Stack *stack){
    if (stack==NULL || (stack->top == stack->data)){
        return 1;
    } else{
        return 0;
        }
}

int stk_full(Stack *stack) {
    if (stack == NULL || (stack->top - stack->data) == stack->capacity) {
        return 1;
    } else {
        return 0;
    }
}




