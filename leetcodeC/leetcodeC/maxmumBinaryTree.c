/*
Given a binary tree, find its maximum depth.
The maximum depth is the number of nodes along the longest path from the root node down to the farthest leaf node.
*/

#include "leetcodeC.h"

/**
* Definition for a binary tree node.
* struct TreeNode {
*     int val;
*     struct TreeNode *left;
*     struct TreeNode *right;
* };
*/
int maxDepth(struct TreeNode* root) {
	int maxLeftDepth, maxRightDepth;
	return root == NULL ? 0 : ((maxLeftDepth = maxDepth(root->left)) > (maxRightDepth = maxDepth(root->right)) ? maxLeftDepth : maxRightDepth) + 1;
}