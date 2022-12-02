// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
#define size 3

void insert_rear(int q[],int *r,int item){
    if(*r==size-1){
        printf("Queue overflow\n");
   
    }
    else
    {
        *r=*r+1;
        q[*r]=item;
    }
}

int delete_front(int q[],int *r,int *f){
    int del_item;
    if(*f>*r){
        printf("Queue underflow\n");
        
    }
    else{
        del_item=q[*f];
        *f=*f+1;
        return del_item;
    }
}
void display(int q[],int *f,int *r){
    int i;
    if(*f>*r){
        printf("Queue underflow\n");
    }
        else{
            for(int i=*f;i<=*r;i++){
                printf("%d\t",q[i]);
            }
                printf("\n");
            
        }
    
}
int main(){
    int q[size];
    int choice;
    int data;
    int del_item,*r=-1,*f=0;
    while(1){
    printf("Enter choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
              printf("enter element to be inserted\n");
              scanf("%d",&data);
              insert_rear(q,&r,data);
              break;
        case 2: del_item=delete_front(q,&r,&f);
              printf("The deleted value is %d\n",del_item);
              break;
        case 3: display(q,&f,&r);
              break;
        default:exit(0);      
    }
    
}
}
