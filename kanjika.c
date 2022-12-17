

#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
typedef struct node * N;
N insert_front(N  ptr,int data){
    N p=(N)malloc(sizeof(struct node));
    p->data=data;
    p->next=ptr;
    return p;

}
N insert_rear(N ptr,int data){
    N p=(N)malloc(sizeof(struct node));
    p->data=data;
    p->next=NULL;
    if(ptr==NULL){
        return p;
    }
    N q= ptr;
    while(q->next!=NULL){
        q=q->next;

    }
    q->next=p;
    // q->data=data;
    // p->next=NULL;
    return ptr;

}


N insert_in_between(N ptr,int index,int data){
    N p=(N)malloc(sizeof(struct node));
    N q= ptr;
    int i=0;
    while(i!=index-1){
        q=q->next;
        i++;

    }
    p->next=q->next;
    p->data=data;
    q->next=p;
    printf("noice");
    return ptr;
    
        
}
void display(N ptr){
    {N p=ptr;
    
    if(ptr==NULL){
        printf("list is empty\n");
    }
    else 
    while(p!=NULL){
    printf("%d\t",p->data);
    p=p->next;
}
    }
    
}

int main(){
    N head=(N) malloc(sizeof(struct node));
    head=NULL;
    int choice;
    int item;
    int index;
    while(1){
        printf("\nenter your choice \n1.display\n2.insert front\n3.insert rear\n4.insert in between\n5.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: display(head);
            break;
            case 2:printf("enter item u want to add\n");
            scanf("%d",&item);
            head=insert_front(head,item);
            break;
            case 3: printf("enter the item u wanna add\n");
            scanf("%d",&item);
            head=insert_rear(head,item);
            break;
            case 4: printf("enter the item u wanna add and index\n");
            scanf("%d",&item);
            scanf("%d",&index);
            head=insert_in_between(head,index,item);
            break;
           
            default: exit(0);
            break;
            }

        }

    }