#include<stdio.h>
#include<stdlib.h>
#define Stack_size 5


void push(int st[],int item,int *top)
{
    if(*top==Stack_size-1 )
        printf("Stack Overflow \n");
    else
    {
        *top = *top + 1;
        st[*top] = item;
    }
}

int pop(int st[],int *top)
{
    int delitem;
        if(*top==-1){
            printf("Stack Underflow \n");
            return 0;
        }
        else
        {
            delitem = st[*top];
            *top = *top - 1;
            printf("The element deleted is %d \n",delitem);
            return delitem;
        }
}

void display(int st[],int* top)
{
    int i;
    if(*top == -1)
        printf("Stack is empty\n");
    for(i=0; i <=*top;i++)
        printf("The %d element of stack is %d \n",(i+1), st[i]);
}

int main()
{   
int st[5];
int i_item;
int top=-1;
int value_del,choice;
    while(1)
    {
        printf("Enter the option you want to choose \n 1.  Insert an Element \n 2. Remove an Element \n 3. Display the elements \n 4. Exit\n ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("Enter the Element you want to add\n");
                   scanf("%d",&i_item);
                //    item = i_item;
                    push(st,i_item,&top);
                    break;
            case 2:pop(st,&top);
                    break;
            case 3: display(st,&top);
                    break;
            default:exit(0);
                    break;
        }
    }
}