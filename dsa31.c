#include <stdio.h>
#define M 4
int stack[M];
int top = -1;
void push(int value){
    if(top==M){
        printf("Stack overflow");
        return;
    }
        stack[++top]=value;
}
void pop(){
    if(top==-1){
        printf("Stack Underflow");
    }
    top--;
}
void peek(){
    printf("the topmost element is %d",stack[top]);
}
int main(){
    push(45);
    push(78);
    pop();
    push(12);
    push(52);
    pop();
    pop();
    pop();
    peek();
    peek();
}