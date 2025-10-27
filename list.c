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
  int track = 0;
  while (current-> next != NULL) {
        track+=1;
        current = current -> next;
    }
    return track;
}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_find(struct ll_node *head, int value) {
   
}

/**
 * TODO: Describe what the function does
 */
int *ll_toarray(struct ll_node *head) {
   
}

/**
 * TODO: Describe what the function does
 */
struct ll_node *ll_create(int data) {
   
}

/**
 * TODO: Describe what the function does
 */
void ll_destroy(struct ll_node *head) {
    
}

/**
 * TODO: Describe what the function does
 */
void ll_append(struct ll_node *head, int data) {
 
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

