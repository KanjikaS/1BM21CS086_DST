#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node * next;
};
typedef struct node * N;
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


N delete_front(N ptr)
{
    if(ptr==NULL){
        printf("queue is empty ,item cannot be deleted\n");
    }
    else{
        ptr=ptr->next;
    }
    return ptr;
}




void display(N ptr){
    {N p=ptr;
   
    if(ptr==NULL){
        printf("queue is empty\n");
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
        printf("\nenter your choice \n1.display\n2.insert\n3.delete \n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: display(head);
            break;
           
            case 2: printf("enter the item u wanna add\n");
            scanf("%d",&item);
            head=insert_rear(head,item);
            break;
            
            case 3: head=delete_front(head);
           
            break;
           
            default: exit(0);
            break;
            }

        }

    }
