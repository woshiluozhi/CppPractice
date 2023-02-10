#include "Queue.h"

void QueueInit(Queue* pq)
{
	assert(pq);
	pq->head = nullptr;
	pq->tail = nullptr;
	pq->size = 0;
}
void QueueDestroy(Queue* pq)
{
	assert(pq);
	QNode* cur = pq->head;
	while (cur)
	{
		QNode* del = cur;
		cur = cur->next;
		free(del);
		del = nullptr;//可以不置空,局部变量会销毁
	}
	pq->head = pq->tail = nullptr;
	pq->size = 0;
}
void QueuePush(Queue* pq, QDataType x)
{
	assert(pq);
	QNode* newnode = (QNode*)malloc(sizeof(QNode));
	if (newnode == nullptr)
	{
		printf("malloc failed!\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = nullptr;
	if (pq->tail == nullptr)
	{
		pq->head = pq->tail = newnode;
	}
	else
	{
		pq->tail->next = newnode;
		pq->tail = newnode;
	}
	pq->size++;
}
void QueuePop(Queue* pq);
QDataType QueueFront(Queue* pq);
QDataType QueueBack(Queue* pq);
bool QueueEmpty(Queue* pq);
int QueueSize(Queue* pq);

//void QueuePop(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	if (pq->head->next == NULL)
//	{
//		free(pq->head);
//		pq->head = pq->tail = NULL;
//	}
//	else
//	{
//		QNode* del = pq->head;
//		pq->head = pq->head->next;
//
//		free(del);
//	}
//
//	pq->size--;
//}
//
//QDataType QueueFront(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->head->data;
//}
//
//QDataType QueueBack(Queue* pq)
//{
//	assert(pq);
//	assert(!QueueEmpty(pq));
//
//	return pq->tail->data;
//}
//
//bool QueueEmpty(Queue* pq)
//{
//	assert(pq);
//
//	return pq->head == NULL && pq->tail == NULL;
//}
//
//// 1G = 1024MB
//// 1024MB = 1024*1024KB
//// 1024*1024KB = 1024*1024*1024Byte
//
//int QueueSize(Queue* pq)
//{
//	assert(pq);
//
//	/*int size = 0;
//	QNode* cur = pq->head;
//	while (cur)
//	{
//		cur = cur->next;
//		++size;
//	}
//
//	return size;*/
//
//	return pq->size;
//}