#include <stdio.h>
#include <stdlib.h>


//implement stack using linked list

struct stack{
    int data;
    struct stack* next;
};


//shows the whole stack
void show(struct stack* tp){
    if(isEmpty(tp) == 0){
        printf("STACK EMPTY");
    }
    else{
        struct stack* nw = tp;
        while(nw!=NULL){
         printf("%d\n",nw->data);
            nw = nw->next;
        }
    }
    
}

//checks if the stack is empty or not
int isEmpty(struct stack* top){
    if(top == NULL){
        return 0;
    }
    else{
        return 1;
    }
}


//functon to push an element inside stack
struct stack* push(int n,struct stack* top){
    if(top == NULL){
        top = (struct stack*)malloc(sizeof(struct stack));
        top->data = n;
        top->next = NULL;
    }
    else{
        struct stack* node = (struct stack*)malloc(sizeof(struct stack));
        node->data = n;
        node ->next = top;
        top = node;
    }
    printf("%d is pushed\n",n);
    return top;
}


//function to pop an element out of stack
struct stack* pop(struct stack* a){
    if (isEmpty(a) == 0){
        printf("Stack Empty");
    }
    else{
        struct stack* ptr = a;
        printf("%d is popped\n",ptr->data);
        a = a->next;
        free(ptr);
        return a;
    }
}


//driver code
int main(){
    struct stack* top = NULL;
    top = push(4,top);
    top = push(7,top);
    top = pop(top);
    top = pop(top);
    show(top);
}