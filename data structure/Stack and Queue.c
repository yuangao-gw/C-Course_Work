#include<stdio.h>
#include<malloc.h>

#define TRUE 1
#define FALSE 0

typedef struct QNode
{
	int data;
	QNode *next;
} QNode;
typedef struct 
{
	QNode *head;
	QNode *rear;
}QueueLink;

QueueLink q;
int InitQueue(QueueLink *q)
{
	q->head = (QNode *)malloc(sizeof(QNode));
	if(q->head == NULL)
		return FALSE;
	q->head->next = NULL;
	q->rear = q->head;
	return TRUE;
}
QueueLink *EnQueue(QueueLink *q, QNode *x)
{
	x = (QNode *)malloc(sizeof(QNode));

	if(!x)
		return q;
	x->next = NULL;
	q->rear->next = x;
	q->rear = x;
	return q;

}
QueueLink *DeQueue(QueueLink *q, int *e)
{
	QNode *p;
	if(q->head == q->rear)
		return q;
	*e = q->head->next->data;
	p = q->head->next;
	q->head->next = p->next;
	if(q->rear == p)
		q->rear = q->head;
	free(p);
	return q; 
}
void DestroyQueue(QueueLink *q)
{
	while(q->head)
	{
		q->rear = q->head->next;
		free(q->head);
		q->head = q->rear;
	}
}

int main()
{
	QNode x;
	int e;

	InitQueue(&q);
	EnQueue(&q, &x);
	DeQueue(&q, &e);
	DestroyQueue(&q);
	return 0;
}

/*#define TRUE 1
#define FALSE 0
#define Stack_Size 10
#define StuctElementType int

typedef struct Stack
{
	StuctElementType data[Stack_Size];
	int top;
} Stack;
Stack s;
void Create_Stack(Stack *s)
{
	s->top = -1;
}
int Push(Stack *s, StuctElementType x)
{
	if(s->top == Stack_Size-1)
		return FALSE;
	s->top++;
	s->data[s->top] = x;
	return TRUE;
}
int Pop(Stack *s, int *x)
{
	if(s->top == -1)
		return FALSE;
	*x = s->data[s->top];
	s->top--;
	return TRUE;
}
bool IsEmpty(Stack *s)
{
	if(s->top == -1)
		return true;
	else 
		return false;
}
bool IsFull(Stack *s)
{
	if(s->top == Stack_Size-1)
		return true;
	else 
		return false;
}
int GetTop(Stack *s, int *x)
{
	if(s->top == -1)
		return FALSE;
	*x = s->data[s->top];
	return TRUE;
}
void clear(Stack *s)
{
	int i=0;
    for(;i < Stack_Size; i++)
    {
		s->data[i] = 0;
    }
    s->top = 0;
}
int main()
{
	int i, x;

	Create_Stack(&s);
	for(i = 0; i < 2; i++)
		Push(&s, i);
	for(i = 0; i <= s.top; i++)
		printf("%d\n", s.data[i]);
	Pop(&s, &x);
	for(i = 0; i <= s.top; i++)
		printf("%d\n", s.data[i]);
	clear(&s);
	return 0;
}*/
