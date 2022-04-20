#include<iostream>
#include<stdio.h>
using namespace std;
#include<stdlib.h>
#include<conio.h>

#define TRUE 1
#define FALSE 0
#define Stack_Size 50
#define StackElementType int
typedef struct
{
	StackElementType elem[Stack_Size];
	int top;
}SeqStack;
typedef struct car{
	int data;
	struct car *next;
}QueueNode;
typedef struct Node{
	QueueNode *head;
	QueueNode *rear; 
}LinkQueueCar;   

void  InitStack(SeqStack *S)//新建空栈 
{
  	S->top=-1;
}
int InitQueue(LinkQueueCar *Q)                                   //初始化便道
{
	Q->head=(QueueNode *)malloc(sizeof(QueueNode)); 
	if(Q->head!=NULL)
	{
		Q->head->next=NULL; 
		Q->rear=Q->head;
		return(1); 
	}
	else return(-1);
}
int Push(SeqStack *S,StackElementType x)//进栈 
{
	if(S->top==Stack_Size-1) return(FALSE);
	S->top++;
	S->elem[S->top]=x;
	return(TRUE);
}

char Pop(SeqStack *S,char *x)//出栈
{
   if(S->top==-1)
      return(FALSE);
   else
   {
   	  *x=S->elem[S->top];
   	  S->top--;
   	  return(TRUE);
   }	
} 
int InQueue(LinkQueueCar *W)                   
{ 
	int a;
	QueueNode *t; 
		t=(QueueNode *)malloc(sizeof(QueueNode)); 
		t->data=a; 
		t->next=NULL; 
		W->rear->next=t; 
		W->rear=t; 
		return(1);
}
void LeaveQueue(LinkQueueCar *W)   
{
	int i, room,t;
	QueueNode *q; 

		if(W->head!=W->rear)               
		{
			q=W->head->next; 
			t=q->data; 
			W->head->next=q->next; 
			if(q==W->rear) W->rear=W->head; 
			free(q); 
		}
		                         
}
char GetTop(SeqStack *S, StackElementType *x)
{  
	if(S->top==-1)  
		return(FALSE);
	else
	{
  		*x = S->elem[S->top];
  		return(TRUE);
	}
} 

char ch,h;
void main() 
{
	char op,b,a;
	int x,n,c,v=0;
	SeqStack S;
	LinkQueueCar Q;
	InitStack(&S);
    InitQueue(&Q);
	Push(&S,'#');
    Pop(&S,&op);
	InQueue(&Q);
	LeaveQueue(&Q);
}
