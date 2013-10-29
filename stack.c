// File: $Id$
// Implementation of a stack.
//  For this project, the tokens (C strings) from the
//  postfix expression are pushed onto the stack.
// @author Marcus Morrs <mwm3968@rit.edu>

#include "stack.h"
#include "stackNode.h"
#include <stdlib.h>
#include <stdio.h>

// Add an element to the top of the stack (stack is changed).
// This routine dynamically allocates a new node.
// @param stack Points to the top of the stack
// @param data The token (C String)
void push(StackNode** stack, char* data){
     //StackNode* topNode = *stack;
     //StackNode* newTop = makeStackNode(data, *stack);
     //*stack = newTop;
     //printf("PUSHING!\nOld Top: %s; New Top: %s; New Top's Next:\n", topNode->data, newTop->data, newTop->next->data);
     StackNode *new = makeStackNode(data, *stack);
     *stack = new;
}

// Return the top element fromt he stack (stack is unchanged)
// @param stack Points to the top of the stack
// @return the top element on the stack
// @exception if the stack is empty, the program exits
//   with EXIT_FAILURE
char* top(StackNode* stack){
     if (emptyStack(stack)) exit(EXIT_FAILURE);
     else return stack->data;
}

// Removes the top element from the stack (stack is changed).
// This routine frees the memory associated with the top node.
// @param stack Points to the top of the stack
// @exception If the stack is empty, the program exits
//   with EXIT_FAILURE
void pop(StackNode** stack){
     //StackNode* topNode = *stack;
     //StackNode* newTop = (*topNode).next;
     //stack = &newTop;
     //free(topNode);
     if (emptyStack(*stack)) exit(EXIT_FAILURE);
     StackNode *oldHead = *stack;
     *stack = oldHead->next;
}

// Tells whether the stack is empty or not (stack is unchanged)
// @param stack Points to the top of the stack
// @return 0 if not empty, any other value otehrwise
int emptyStack(StackNode* stack){
     if (stack->data == NULL) return 1;
     else return 0;
}

// Revisions: $Log$
