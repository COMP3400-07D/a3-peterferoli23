#include "list.h"
#include <stdlib.h>
// TODO: Include any necessary header files here

/**
 * Returns the head of the linked list.
 * 
 * @param head Pointer to the first node of the linked list.
 * @return The head of the linked list. If the list is empty (NULL), returns NULL.
 */
struct ll_node *ll_head(struct ll_node *head) {
    return head;
}

/**
 * returns the tail of the linked list
 *
 * @return returns null if head is null (empty list), or returns the tail of the list
 */
struct ll_node *ll_tail(struct ll_node *head) {
    if (head == NULL) {
        return NULL;
    }

    struct ll_node *current = head;
    while (current-> next != NULL) {
        current = current -> next;
    }
    return current;

}

/**
 * Finds the size of the linked list
 *
 * @return returns the size of the linked list
 */
int ll_size(struct ll_node *head) {
  if (head == NULL) {
    return 0; //linked list has no values attached, so it is 0 in length
  }

  struct ll_node *current = head;
  int track = 1;
  while (current-> next != NULL) {
        track+=1;
        current = current -> next;
    }
    return track;
}

/**
 * Searches through a linked list for VALUE, then returns the place in linked list
 *
 * @param value the value which is being looked for
 * @return the node that has value within it
 */
struct ll_node *ll_find(struct ll_node *head, int value) {
    if (head == NULL) {
    return NULL; //linked list is empty, no need to check
    }

    struct ll_node *current = head;
    while (current != NULL) {
        if (current->value == value) {
            return current;
        }
        current = current->next;
    }
    return NULL; //unable to find the value, return NULL
  
}

/**
 * Turns the linked list into an array
 *
 * @return returns the newly created array
 */
int *ll_toarray(struct ll_node *head) {
    int *linkedArray; //for later use
    if (head == NULL) {
    return NULL; //linked list is empty, no need to check
    }
    
    // need to find the size first, grabbing from ll_size
    struct ll_node *current = head;
    int track = 0;
    while (current != NULL) {
        track+=1;
        current = current -> next;
    }

    linkedArray = (int *) malloc(track*sizeof(int));
    if (linkedArray == NULL) {
        return NULL;
    }

    current = head; //resetting for continued use.

    int arrVals = 0;
    while (current != NULL) {
        linkedArray[arrVals] = current->data;
        current = current-> next;
        arrVals+=1;
    }
    return linkedArray;

}

/**
 * Creates a linked list node, and returns it.
 *
 * @return returns the new linked list & node
 */
struct ll_node *ll_create(int data) {
   struct ll_node* node = malloc(sizeof(struct ll_node));
   if (node == NULL) {
    return NULL; //failed to allocate memory
   } 

   node->data = data;
   node->next = NULL;

   return node;
}

/**
 * Frees all values in the linked list
 */
void ll_destroy(struct ll_node *head) {
    struct ll_node* current = head; //for iterating through the list
    struct ll_node* node2; //for saving the value of current

    while (current != NULL) {
        node2 = current->next;
        free(current);
        current = node2;
    }
}

/**
 * Appends newly created nodes to the end of a list
 *
 * @param data the value which will be appended to the list
 */
void ll_append(struct ll_node *head, int data) {

    if (head == NULL) { //if the list is empty in the first place
    //cannot append
    return;
   }

    struct ll_node* node = malloc(sizeof(struct ll_node));

   node->data = data;
   node->next = NULL;

   struct ll_node *current = head; // for traversal
   while (current->next != NULL) {
    current = current->next;
   }

   current->next = node;
   //appends the node onto the end of the tail

}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_fromarray(int* data, int len) {

}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_remove(struct ll_node *head, int value) {

}

