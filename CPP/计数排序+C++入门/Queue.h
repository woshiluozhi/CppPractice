#pragma once

// �����ռ� -- �����ռ���,ֻӰ��ʹ�ã���Ӱ����������

//namespace AQueue
//{
//	// СAʵ��
//	struct Node
//	{
//		struct Node* next;
//		int val;
//	};
//
//	struct Queue
//	{
//		struct Node* head;
//		struct Node* tail;
//	};
//	
//	int min = 0;
//}
//
//// ....

//namespace lz
//{
//	namespace A
//	{
//
//		// СAʵ��
//		struct Node
//		{
//			struct Node* next;
//			int val;
//		};
//
//		struct Queue
//		{
//			struct Node* head;
//			struct Node* tail;
//		};
//
//		int min = 0;
//	}
//}
//
//// ....

namespace lz
{
	// СAʵ��
	struct Node
	{
		struct Node* next;
		int val;
	};

	struct Queue
	{
		struct Node* head;
		struct Node* tail;
	};

	void QueueInit(struct Queue* q)
	{}

	void QueuePush(struct Queue* q, int x)
	{}

}