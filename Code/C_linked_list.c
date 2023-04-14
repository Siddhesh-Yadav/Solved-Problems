#include <stdio.h>
#include <stdlib.h>

struct c_linked_list {
    int data;
    struct c_linked_list * next;
};
typedef struct c_linked_list clist;

clist * head, * s;

void create(clist * start){
    printf("\nEnter data, -1111 to exit :");
    scanf("%d",&start->data);
    if(start->data == -1111){
        start->next = s;
    }else{
        start->next = (clist *)malloc(sizeof(clist));
        create(start->next);
    }
}
void traverseNcount(clist * start){
    clist * temp = start;
    int count = 0;
    do{
        count++;
        printf("%d  ",temp->data);
        temp = temp->next;
        
    }while(temp != start);
    printf("Total number of nodes in linked list is %d",count);
}

void main (){
    head = (clist *)malloc(sizeof(clist));
    s = head;
    create(head);
    traverseNcount(head);
    
}