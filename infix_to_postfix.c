#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
char infix[20];
char postfix[20];
char s[20];
void push(char item){
    top++;
    s[top]=item;
}
char pop(){
    return s[top--];
}
int sp(char item){
    switch(item){
        case'+':
        case'-': return 2;
        case'*':
        case'/': return 4;
        case'^': 
        case'(': return 0;
        case'#':return -1;
        deafult :return 8;

}
}
int ip(char item){
    switch(item){
        case'+':
        case'-': return 1;
        case'*':
        case'/': return 3;
        case'^': 
        case'(': return 9;
        case')': return 0;
        default :return 7;

}
}
void inf_to_post_fix(){
    int i,j=0;
    char symbol;
    push('#');
    for(i=0;i<strlen(infix);i++){
        symbol=infix[i];
        while(sp(s[top])>ip(symbol)){
            postfix[j]=pop();
            j++;
        }
        if(sp(s[top])<ip(symbol))
        {
            push(symbol);
        }
        while(sp(s[top])==ip(symbol))
        {
            pop();
        }
    }
    while(s[top]!='#'){
        postfix[j]=pop();
        j++;
    }
    postfix[j]='\0';
    
}
void main(){
    
    printf("enter a valid infix expression\n");
    scanf("%s",infix);
    inf_to_post_fix();
    printf("the postfix expression is %s\n",postfix);
}



