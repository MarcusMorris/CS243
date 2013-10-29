#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

int main() {

    StackNode **stack = malloc(sizeof(stack));
    push(stack, "Hello");
    push(stack, "World");
    push(stack, "Third entry");
    printf("%s\n", top(*stack));
    printf("%d\n", emptyStack(*stack));
    pop(stack);
    printf("%s\n", top(*stack));
    printf("%d\n", emptyStack(*stack));
    pop(stack);
    printf("%s\n", top(*stack));
    printf("%d\n", emptyStack(*stack));
    pop(stack);
    printf("got through the whole pop!");
    printf("%d\n", emptyStack(*stack));
    push(stack, "1");
    push(stack, "2");
    push(stack, "3");
    push(stack, "4");
    push(stack, "5");
    while(!emptyStack(*stack)){
    	printf("\nTop of stack contains %s\n", top(*stack));
	pop(stack);
    }
    //pop(stack);
    //top(*stack);
    return 0;
}
