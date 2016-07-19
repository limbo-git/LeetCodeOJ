// DeleteLinkedListNode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(NULL) {}
};


class Solution 
{
public:
	void deleteNode(ListNode* node) 
	{
		// modify node->val and remove node->next;
		if (node == NULL)
			return;
		if (node->next == NULL)
			return;
		ListNode* deletetonextnode = node->next;
		node->val = node->next->val;
		node->next = deletetonextnode->next;
		delete deletetonextnode;
	}
};

int main()
{
    return 0;
}

