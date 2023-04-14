# include <stdio.h>
# include <malloc.h>
struct dl_list {
    int data;
    struct dl_list *right;
    struct dl_list *left;
}
typedef struct dl_list dlist;
void dl_create (dlist *);
void traverse (dlist *);
/* Function creates a simple doubly linked list */
void dl_create(dlist *start){
    printf("\n Input the values of the element -1111 to come out : ");
    scanf("%d", &start->data);
    if(start->data != -1111) {
        start->right = (dlist *) malloc(sizeof(dlist));
        start->right->left = start;
        start->right->right = NULL;
        dl_create(start->right);
    } else
        start->right = NULL;
}
/* Display the list */
void traverse (dlist *start){
   printf("\ntraversing the list using right pointer\n");
    do{
        printf("%d  ",start->data);
        start = start->right;
    }while(start->right);
    start = start->left;
    printf("\ntraversing the list using left pointer\n");
    while(start){
        printf("%d  ",start->data);
        start = start->left;
    };
}
void main(){
    dlist *head;
    head = (dlist *) malloc(sizeof(dlist));
    head->left=NULL;
    head->right=NULL;
    dl_create(head);
    printf("\n Created doubly linked list is as follows");
    traverse(head);
}