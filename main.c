//Queues (linear)

#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE 4
//Defining Queue
typedef struct
{
    char items[MAXSIZE][20];
    int f,r;
}QUEUE;
// Overflow Condition
int isfull(QUEUE q)
{
    if(q.r==MAXSIZE-1)
        return 1;
    return 0;
}
int isempty(QUEUE q)
{
    if(q.f==-1)
        return 1;
    return 0;
}
//Insertion
void push(QUEUE *q,char data[])
{
    strcpy(q->items[++q->r],data);
    printf("\nThe Character inserted is %s",data);
    if(q->f==-1)
        q->f=0;
}
//Delete
char *qdelete(QUEUE *q)
{
    char data[20];
    strcpy(data,q->items[q->f]);
    if(q->f==q->r)
        q->f=q->r=-1;
    else
        q->f++;
    return data;
}
//Display
void display(QUEUE q)
{
    int i;
    printf("\n Queue Contents : \n F-->");
    for(i=q.f;i<=q.r;i++)
        printf("%s-->",q.items[i]);
    printf("R");
}
int main()
{
    QUEUE q;
    int choice;
    char ch[20];
    q.r=q.f=-1;
    while(1)
    {
        printf("\n 1:Insert\t 2:Delete\t 3:Display\t 4:Exit\n");
        printf("Enter the choice :\t");
        scanf("%d",&choice);
            switch(choice)
            {
                case 1 : if(isfull(q))
                            printf("\n OverFlow");
                         else
                            {
                            printf("Enter the character :");
                            scanf("%s",ch);
                            push(&q,ch);
                            }
                        break;
                case 2 : if(isempty(q))
                            printf("\n QUEUE UNDERFLOW\n");
                         else
                            printf("\n %s is delete off from the queue",qdelete(&q));
                        break;
                case 3 : if(isempty(q))
                             printf("\n QUEUE UNDERFLOW\n");
                         else
                             display(q);
                         break;
                case 4 : exit(0);
                default : printf("INVALID INPUT\n");
                    }
    }
    return(0);
}
