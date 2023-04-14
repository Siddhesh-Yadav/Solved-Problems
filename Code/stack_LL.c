#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node * next;
} node;

void push(node ** tos, int elem){
    node * temp = (node *)malloc(sizeof(node));
    temp->data  = elem;
    temp->next = *tos;
    *tos = temp;
};
void pop(node ** tos){
    node * temp;
    temp = *tos;
    if(temp == NULL){
        printf("\nStack is already Empty");
        return;
    }else{
        printf("Element %d poped out of stack",temp->data);
        *tos = (*tos)->next;
        free(temp);
    };
};

void show(node * tos){
    node * temp = tos;
    if(temp == NULL){
        printf("\nStack is Empty");
        return;
    }else{
        while(temp!=NULL){
            printf("\n%d",temp->data);
            temp = temp->next;
        };
    };
};
void menu(node * p){
    int ch, item;
    printf("\n****MENU****\n");
    printf("1 to PUSH an element to stack\n");
    printf("2 to POP an element from stack\n");
    printf("3 to SHOW the stack\n");
    printf("4 to EXIT\n");
    printf("Enter your choice: ");
    scanf("%d",&ch);
    
    switch(ch){
        case 1:
            printf("\nEnter the element you want to push: ");
            scanf("%d",&item);
            push(&p,item);
            menu(p);
            break;
        case 2 :
            pop(&p);
            menu(p);
            break;
        case 3:
            show(p);
            menu(p);
            break;
        case 4:
            printf("\nExiting...");
            exit(0);
    }
}

int main(){
    node * p =NULL;
    menu(p);
    return 0;
}