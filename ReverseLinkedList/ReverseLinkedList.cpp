#include "stack"
#ifndef SUCCESS
#define SUCCESS 0;
#endif
using namespace std;

struct ListNode
{
	int val;
	ListNode* next;
	ListNode(int x) : val(x), next(NULL) {}
};

class Solution
{
public:
	// Recursion
	ListNode* reverseList(ListNode* head)
	{
		if (head == NULL) 
		{
			return head;
		}
		if (head->next == NULL)
		{
			return head;
		}
		if (head->next->next == NULL)
		{
			ListNode* temp = head;
			head = head->next;
			head->next = temp;
			temp->next = NULL;
			return head;
		}
		ListNode* temp_head = head->next;
		head->next = NULL;
		ListNode* heads = this->reverseList(temp_head);
		ListNode* iter = heads;
		while (iter->next != NULL)
		{
			iter = iter->next;
		}
		iter->next = head;
		return heads;
	}

	// stack
	ListNode* reverseList(ListNode* head)
	{
		if (head == NULL) return head;
		stack<ListNode> s;
		ListNode* iter = head;
		while (iter->next != NULL)
		{
			s.push(*iter)
			iter = iter->next;
		}
		head = iter;
		while(s.empty())
		{
			ListNode* item = &s.pop()
			item->next = NULL;
			iter->next = item;
		}
		return head;
	}
};


int main(int argc, char const *argv[])
{
	return SUCCESS;
}