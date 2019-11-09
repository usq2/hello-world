#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXSIZE 4
//Defining a Stack
typedef struct stack
{
    char item[MAXSIZE][10];
    int top;
}STACK;
//Checking Whether the Stack is full
int isfull(STACK s)
{
    if(s.top==MAXSIZE-1)
        return 1;
    return 0;
}
//Checking whether the Stack is empty
int isempty(STACK s)
{
    if(s.top==-1)
        return 1;
    return 0;
}
//Functions
//Inserting an item into the stack
void push(STACK *s,char data[])
{
  strcpy(s->item[++s->top],data);
}
//Deleting an item from the stack
char * pop(STACK *s)
{
    return(s->item[s->top--]);
}
//Display
void display(STACK s)
{
    int i;
    printf("\n The Stack Contents :\n BOS:-->");
    for(i=0;i<=s.top;i++)
        printf("%s-->",s.item[i]);
    printf("TOS\n");
}
//Main Function
int main()
{
    int choice;
    char data[20];
    STACK s;
    s.top=-1;
    printf("\n 1:PUSH\t 2:POP\t 3:DISPLAY\t4:EXIT\n");
    while(1)
    {
        printf("\n Enter the choice : \t");
        scanf("%d",&choice);
         switch(choice)
         {
             case 1 : if(isfull(s))
                        {
                            printf("\n Full Stack \n");
                           break;
                        }
                      else
                      {
                        printf("\nEnter the data to be inserted : \t");
                        scanf("%s",data);
                        push(&s,data);
                      }
                  break;
             case 2 : if(isempty(s))
                        {
                            printf("\n Empty Stack \n");
                            break;
                        }
                      else
                      {
                          printf("\n The data to be popped out is %s",pop(&s));
                      }
                  break;
              case 3 : if(isempty(s))
                        printf("\n Empty Stack \n");
                      else
                      {
                          display(s);
                      }
                  break;
              case 4 : exit(0);
              default : printf("\n Invalid Input \n");
         }
    }
    return 0;
}
