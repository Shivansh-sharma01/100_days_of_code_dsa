# include <stdio.h>
# include <stdlib.h>
struct node {
    int c;
    int e;
    struct node* next;
}node;
struct node* createnode(){
    struct node* n = malloc(sizeof(struct node));
    int coeff,exp;
    if(!n){
        printf("Memory error");
        return NULL;
    }
    printf("Enter coeff and exponent:");
    scanf("%d%d",&coeff,&exp);
    n -> c = coeff;
    n -> e = exp;
    n -> next = NULL;
    return n;
}
struct node* createlist(struct node* head,int k){
    int i = 0;
    struct node* newnode = NULL;
    struct node* temp =  head;
    while (i<k){
    newnode = createnode();
    if(head == NULL){
        head = newnode;
        temp = newnode;
    } else{
        temp -> next = newnode;
        printf("temp->c:%d temp->e:%d\n",temp -> c,temp -> e);
        temp = newnode;
    }
    }
}
int main(){
    int n;
    struct node* head = NULL;
    printf("Enter n:");
    scanf("%d",&n);
    head = createlist(head,n);
    return 0;
}