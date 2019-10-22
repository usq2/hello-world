#include <stdio.h>
#include <string.h>
#include<stdlib.h>
#define MAXSIZE 3
typedef struct
{
    char items[MAXSIZE][30];
    int top;
}stack;
int isempty(stack s)
{
    if(s.top==-1)
        return 1;
    return 0;
}
int isfull(stack s)
{
    if(s.top==MAXSIZE-1)
        return 1;
    return 0;
}
void push(stack *s,char data[30])
{
    strcpy(s->items[++s->top],data);
    printf("%s is pushed onto stack",data);
}
char *pop(stack *s)
{
    return s->items[s->top--];
}
void peek(stack s)
{
    printf("%s",s.items[s.top]);
}
void display(stack s,char data[30])
{
    int i;
    for(i=s.top;i>=0;i--)
    {
        printf("%s",data);
    }
}
int main()
{
    stack s;
    char data[30],res;
    int ch;
    s.top=-1;
   while(1)

   {
    printf("\n1.push\n2.pop\n3.peek\n4.display\n");
    scanf("%d",&ch);
    switch(ch)
    {
       case 1:
           if(isfull(s))
           {
               printf("stack overflow\n");
           }
           else
           {
               printf("enter data to push\n");
               scanf("%s",data);
               push(&s,data);
           }
           break;
           case 2:if(isempty(s))
               {
                   printf("stack underflow\n");
               }
           else
            printf("%s is popped from stack\n",pop(&s));
           break;

           case 3:
               if(isempty(s))
                printf("stack empty\n");
               else
               peek(s);
           break;
           case 4:if(isempty(s))
           printf("stack empty\n");
           else
               display(s,data);
           break;
           default:exit(0);
    }
   }
    return 0;
}
