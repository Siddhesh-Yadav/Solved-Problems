// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
int top, stack[10],choice;

void menu(){
    printf("Enter your choice:\n");
    printf("1 PUSH\n");
    printf("2 POP\n");
    printf("3 SHOW\n");
    printf("4 EXIT\n");
    scanf("%d",&choice);
    if(choice == 1){
        pushit();
        menu();
    }
    else if(choice == 2){
        popit();
        menu();
    }
    else if(choice == 3){
        show();
        menu();
    }
    else if(choice == 4){
        printf("Exiting...");
    }
    else{
        printf("Invalide choice");
    }
}
void pushit(){
    if(top < 10){
        printf("Enter the element you want to push to stack");
        scanf("%d",&stack[top++]);
    }else{
        printf("Stack is full");
    }
}
void popit(){
    printf("Element poped out of stack %d",stack[--top]);
}
void show(){
    for(int i =0;i<= top;i++){
        printf("%d ",stack[i]);
    }
}

int main() {
    // Write C code here
    top = 0;
    menu();

    return 0;
}