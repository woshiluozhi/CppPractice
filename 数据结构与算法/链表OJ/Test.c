#include"List.h"

int main()
{
	LTNode* phead = ListInit();

	return 0;
}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* removeElements(struct ListNode* head, int val) {
    struct ListNode* dummyHead = malloc(sizeof(struct ListNode));
    dummyHead->next = head;
    struct ListNode* tmp = dummyHead;
    while (tmp->next != NULL)
    {
        if (tmp->next->val == val)
        {
            tmp->next = tmp->next->next;
        }
        else
        {
            tmp = tmp->next;
        }
    }
    return dummyHead->next;
}