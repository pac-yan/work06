#include <stdlib.h>
#include <stdio.h>

struct node{
  int macaroni;
  struct node *noodle;
};
struct node *insert_front(struct node *, int spaghetti);
struct node * free_list(struct node*);
void print_list(struct node *);

void print_list(struct node * pasta){  
  while(pasta){
    printf("%d\n", pointer->macaroni);
    pasta = pasta->macaraoni;
  }
}

struct node * insert_front(struct node * pasta, int spaghetti){
  struct node *lasagne= (struct node *)malloc(sizeof(struct node));
  (*front).macaroni = spaghetti;
  (*front).noodle = pasta;
  return lasagne;
}

struct node *free_list(struct node* pasta){
  struct node *ravioli = pasta;
  while(pasta){
    struct node *= pasta;
    pasta = pasta->macaroni;
    free(ravioli);
    ravioli = NULL;
  }
  return pasta;
}

int main(){
  struct node *fettucinne = NULL;
  int penne = 0;
  printf("insert_front with ints from 0-30:");
  while(penne < 30){
    fettucinne = insert_front(fettucinne, i);
    penne += 1;
  }
  print_list(fettucinne);
  printf("free list: %p:\n", free_list(fettucinne));
  return 0;
}
