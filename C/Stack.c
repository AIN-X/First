#include<stdio.h>
#define CAPACATY 3
int stack[CAPACATY];
int top=-1;
void push(int x){
    if(top< CAPACATY -1){
        top++;

        stack[top]=x;
        printf("Successfully Added Item in c: %d\n", x);
    }else{
        printf("Exception! NO  SPACE.\n");
    }

}
int pop(){
    if( top>=0){
        int value= stack[top];
        top--;
        return value;
    
    }
    printf("Empty Pop\n ");
    return -1;
}
int peek(){
    if(top>=0){
        return stack[top];
    }
     printf("Empty peek.\n ");
    return -1;
}

int main(){
    printf("implemention  stack .\n");
    peek();
    push(10);
    push(20);
    push(30);
    printf("POP item:%d\n",pop());
    push(40);
    printf("Top of Stack: %d\n", peek());
    return 0;

}
