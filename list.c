#include <stdlib.h>
#include <stdio.h>
#include "func.h"

int main () {
  struct node *root = (struct node *) malloc(sizeof(struct node));
  root -> i = 5;
  root -> next = NULL;

  root = insert_front(root, 4);
  root = insert_front(root, 3);
  root = insert_front(root, 2);
  root = insert_front(root, 1);
  root = insert_front(root, 0);

  printf("After insert_fronts\n");
  print_list(root);

  root = free_list(root);

  printf("After free_list\n");
  print_list(root);

  return 0;
}


