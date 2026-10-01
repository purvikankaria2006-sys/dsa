#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct stack{
    int top;
    int data[SIZE];
};
typedef struct stack STACK;
void push1(STACK *s,int item)
{
    if(s->top==(SIZE-1))
        printf("\n stack overflow");
    else
    {
        s->top=s->top+1;
        s->data[s->top]=item;
        }
}
void pop1(STACK *s)
{
    if(s->top== -1)
        printf("\n stack underflow ");
    else
    {
        printf("\n element popped is=%d",s->data[s->top]);
        s->top=s->top-1;
    }
}
void display1(STACK s)
{
    int i;
    if(s.top==-1)
        printf("\n stack is empty");
    else
    {
        printf("\n the contents of the stack are \n");
        for(i=s.top;i>=0;i--)
            printf("%d\n",s.data[i]);
    }
}
int main1()
{
    int ch,item;
    STACK s;
    s.top=-1;
    for(;;)
{
    printf("\n 1. push:");
    printf("\n 2.pop:");
    printf("\n 3.display:");
    printf("\n 4.exit");
    printf("\n read choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("\n read element to be pushed:");
            scanf("%d",&item);
            push1(&s,item);
            break;
        case 2:pop1(&s);
        break;
        case 3:display1(s);
        break;
        default:exit(0);
    }
}
return 0;
}
