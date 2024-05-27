#include "cstk.h"

typedef struct Account {
    char *name;
    int balance;
} Account;

int main() {
    Stack *stack = stk_create(10);
    int i;
    for (i = 0; i < 5; i++) {
        int *x = (int *)malloc(sizeof(int));
        *x = i;
        stk_push(stack, x);
    }

    Account account = {"Max Bender", 10};
    stk_push(stack, &account);
    // MARK 1 - draw current contents of stack and relevant contents of heap
    printf("After pushing elements:\n\n");

    printf("address of pointer stack is at:     %p\n", &stack); // Print the address of pointer stack
	printf("stack is pointing to:               %p\n", (void *)stack); // prints what stack is pointing to
	printf("address stored in data is:          %p\n", stack->data); //prints the address stored in data
	printf("ddress of the top of stack is at:   %p\n", &stack->top); // prints the address of the top of stack
    printf("top points to:                      %p\n", (void *)&stack->top); // prints what top points to
	printf("value stored in top is:             %p\n", (void *)stack->top); // print value stored in top of 
	printf("address of the capacity is at:      %p\n", &stack->capacity); // prints address of the capacity
	printf("value store at capacity i:          %d\n", stack->capacity); // prints value store at capacity
	printf("address of the variable i is at:    %p\n", &i); // prints the address of the variable i
	printf("value stored in the variable i is:  %d\n\n", i); // prints value stored in the variable i
    return 0;
}