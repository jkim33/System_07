#include <stdlib.h>
#include <stdio.h>

struct node { int i; struct node *next; };

void print_list(struct node * n) {
  if (n == NULL) {
    printf("[]\n");
    return;
  }
  printf("[");
  while(n -> next != NULL) {
    printf("%d, ",(n -> i));
    n = n -> next;
  }
  printf("%d]\n", (n -> i));
}

struct node * insert_front(struct node * n, int v) {
  struct node* new = (struct node *) malloc(sizeof(struct node));
  new -> i = v;
  new -> next = n;
  return new;
}

struct node * free_list(struct node * n) {
  struct node * al = n;
  struct node * toBeFree;
  
  while (al != NULL) {
    toBeFree = al;
    al = al -> next;
    free(toBeFree);
  }

  free(n);
  return NULL;
}
