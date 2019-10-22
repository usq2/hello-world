#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#define MAXSIZE 3
typedef struct
{
    char items[MAXSIZE];
    int f;
    int r;
}queue;
int isfull(queue q)
{
    if(q.r==MAXSIZE-1)
        return 1;
    return 0;
}
int isempty(queue q)
{
    if(q.f==-1)
        return 1;
    return 0;
}
void insert(queue *q,char data)
{
    q->items[++q->r]=data;
    printf("%c is inserted in queue\n",data);
    if(q->f==-1)
        q->f=0;
}
char del(queue *q)
{
    char el;
    el=q->items[q->f];
    if(q->f==q->r)
        q->f=q->r=-1;
    else
        q->f=q->f+1;
    return el;
}
void display(queue q)
{
    int i;
    for(i=q.f;i<=q.r;i++)
    {
        printf("%c",q.items[i]);
    }
}
int main()
{
    char d;
    int ch;
    queue q;
    q.f=q.r=-1;
    while(1)
    {
        printf("\n1.insert\n2.delete\n3.display\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:if(isfull(q))
            printf("queue full\n");
            else
            printf("enter data to be inserted\n");
            getchar();
            scanf("%c",&d);
            insert(&q,d);
            break;
            case 2:if(isempty(q))
            printf("queue empty\n");
            else
                printf("%c is deleted from queue",del(&q));
            break;
            case 3:if(isempty(q))
            printf("Queue empty\n");
            else
                display(q);
            break;
            default:exit(0);
        }
    }
    return 0;
}
