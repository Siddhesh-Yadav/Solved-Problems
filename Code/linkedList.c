/* Online C Compiler and Editor */
#include <stdio.h>
#include <stdlib.h>

struct list {
    int data;
    struct list * next;
};

void delete(struct list * start, int key){
    struct list * temp;
    if(start->data==key){
        temp = start->next;
        free(start);
        start = temp;
        return;
    }
    struct list * p = start;
    while(p->next != NULL){
        if(p->next->data == key){
            temp = p->next->next;
            free(p->next);
            p->next = temp;
            break;
        }
        p = p-> next;    };
    return;
    
}

struct list * insert(struct list * start, int data, int key){
    struct list * ptr = (struct list*)malloc(sizeof(struct list));
    ptr->data = data;
    struct list * p = start;
    while(p->data != key) {
        p = p->next;
    }
    ptr->next = p->next;
    p->next = ptr;
    return start;
}


void create(struct list * start){
    printf("enter");
    scanf("%d",&start->data);
    if(start->data!= -1111) {
        start->next = (struct list*)malloc(sizeof(struct list));
        create(start->next);
    } else {
        start->next = NULL;
        return;
    }
}

void traverse(struct list * start){
    if(start->next!=NULL) {
        printf("%d ",start->data);
        traverse(start->next);
    }
}

int main(){
    printf("hello world\n");
    struct list * head;
    head = (struct list*)malloc(sizeof(struct list));
    create(head);
    // Write C code here
    traverse(head);
    printf("\n");
    head = insert(head,9,3);
    traverse(head);
    printf("\n");
    delete(head,5);
    traverse(head);
    return 0;
}