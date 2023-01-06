#pragma once

// 命名空间 -- 命名空间域,只影响使用，不影响生命周期

//namespace AQueue
//{
//	// 小A实现
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
//		// 小A实现
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
	// 小A实现
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