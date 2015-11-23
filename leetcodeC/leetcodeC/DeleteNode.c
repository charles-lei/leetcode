/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     struct ListNode *next;
* };
*/
#include "leetcodeC.h"
void deleteNode(struct ListNode* node) {
	struct ListNode* releaseNode;
	if (node == NULL) return;
	node->val = node->next->val;
	releaseNode = node->next;
	node->next = node->next->next;
	free(releaseNode);
}