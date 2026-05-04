#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev; 
};
struct node* createnode(){
    int value;
    printf("Enter value:");
    scanf("%d",&value);
    struct node* n = malloc(sizeof(struct node));
    n -> data = value;
    n -> next = NULL;
    n -> prev = NULL;
    return n;
}
struct node* createlinkedlist(struct node* head){
    char choice;
    struct node* newnode = createnode();
    struct node* temp = head;;
    newnode -> next = NULL;
    newnode -> prev = NULL;
    do {
    if(head == NULL){
        head = newnode;
        temp = newnode;
    }
    else{
        temp -> next = newnode;
        temp = newnode;
    }
    printf("Enter more node??(y/n)");
    scanf("%c ",&choice);
  } while(choice == 'y');
}
int main(){
    struct node* h1 = malloc(sizeof(struct node));
    struct node* h2 = malloc(sizeof(struct node));
    h1=createlinkedlist(h1);
    h2=createlinkedlist(h2);
}