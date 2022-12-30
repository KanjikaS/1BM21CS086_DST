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
N delete_front(N ptr)
{
    if(ptr==NULL){
        printf("Stack Empty ,item cannot be popped\n");
    }
    else{
        ptr=ptr->next;
    }
    return ptr;
}
N delete_rear(N ptr){
    N p=ptr;
    while(p->next->next!=NULL){
        p=p->next;
    }
    p->next=NULL;
    // printf("heli");
    // free(p);
    return ptr;
}
N delete_in_between(N ptr,int index){
    N p=ptr;
    N q=ptr->next;
    int i=0;
    while(i!=index-1){
        p=p->next;
        q=q->next;
        i++;
    }
    p->next=q->next;

    return ptr;

}
N del_value(N ptr,int data){
    N p=ptr;
    N q=ptr->next;
    while(p!=NULL && q->data!=data){

        p=p->next;
        q=q->next;
        // printf("lol\n");
    }
    // printf("hiiii\n");
    if(q->data==data){
        p->next=q->next;
// printf("heluu");
    }

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
    // printf("noice");
    return ptr;


}
void display(N ptr){
    {N p=ptr;

    if(ptr==NULL){
        printf("stack empty is empty\n");
    }
    else
        printf("\n");
    while(p!=NULL){
    printf("%d\n",p->data);
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
        printf("\nenter your choice \n1.display\n2.Push\n3.Pop\n4.Exit\n");
        scanf("%d",&choice);
        switch(choice){
            case 1: display(head);
            break;
            case 2:printf("enter item u want to add\n");
            scanf("%d",&item);
            head=insert_front(head,item);
            break;


            case 3: head=delete_front(head);

            break;

            default: exit(0);
            break;
            }

        }

    }
