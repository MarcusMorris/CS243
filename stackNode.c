// File: $Id$
// Implementation of a stack node.
// @author Marcus Morris <mwm3968@rit.edu>

#include "stackNode.h"
#include <stdlib.h>
#include <stdio.h>

// Dynamically allocate a new stack node
// @param data The data value
// @param next Pointer to the next node (NULL if none)
// @return The new stack node
StackNode* makeStackNode(char* data, StackNode* next){
     //if (next != NULL) printf("The next node contains %s\n", next->data);
     StackNode* thisNode = malloc(sizeof(StackNode));
     thisNode->data = data;
     thisNode->next = next;
     //if (next == NULL) return thisNode;
     //printf("MAKING NEW NODE!\nThis node contains %s, and I assigned it the next node with %s, so this node's next contains %s!\n",  thisNode->data, next->data, thisNode->next->data);
     return thisNode;
}

// Revisions: $Log$
