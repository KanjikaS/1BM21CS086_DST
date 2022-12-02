
#include <stdio.h>
#include<stdlib.h>
#define size 3

void insert(int q[],int *r,int item,int *count){
    if(*count==size){
        printf("Queue overflow\n");
   
    }
    else
    {
        *r=*r+1;
        *r=*r%size;
        q[*r]=item;
        *count=*count+1;
    }
}

int delete_front(int q[],int *r,int *f,int *count){
    int del_item;
    if(*count==0){
        printf("Queue underflow\n");
        
    }
    else{
        del_item=q[*f];
        *f=*f+1;
        *f=*f%size;
        *count=*count-1;
        return del_item;
    }
}
void display(int q[],int *f,int *count){
    int temp,i;
    temp=*f;
    if(*count==0){
        printf("Queue underflow\n");
    }
        else{
            for(int i=0;i<*count;i++){
                printf("%d\t",q[i]);
                // printf("%d",i);
                temp=(temp+1);
                temp=temp%size;
            }
                printf("\n");
            
        }
    
}
int main(){
    int q[size];
    int choice;
    int data;
    int *count=0;
    int del_item,*r,*f;
    while(1){
    printf("Enter choice\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
    scanf("%d",&choice);
    switch(choice){
        case 1: 
              printf("enter element to be inserted\n");
              scanf("%d",&data);
              insert(q,&r,data,&count);
              break;
        case 2: del_item=delete_front(q,&r,&f,&count);
              printf("The deleted value is %d\n",del_item);
              break;
        case 3: display(q,&f,&count);
              break;
        default:exit(0);      
    }
    
}
}
