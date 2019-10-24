#include <iostream>

using namespace std;
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
    cout<< "inserted in queue\n";
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
        cout<<q.items[i];
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
        cout<<("\n1.insert\n2.delete\n3.display\n");
        cin>>ch;
        switch(ch)
        {
            case 1:if(isfull(q))
            cout<<("queue full\n");
            else
            cout<<("enter data to be inserted\n");
            cin>>d;
            insert(&q,d);
            break;
            case 2:if(isempty(q))
            cout<<("queue empty\n");
            else
                cout<<"deleted from queue";
                del(&q);
            break;
            case 3:if(isempty(q))
            cout<<("Queue empty\n");
            else
                display(q);
            break;
            default:exit(0);
        }
    }
    return 0;
}
