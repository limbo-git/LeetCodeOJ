// InvertBinaryTree.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};


class Solution 
{
public:
	TreeNode* invertTree(TreeNode* root)
	{
		if (root == NULL)
			return root;
		if ((root->left == NULL) && (root->right == NULL))
			return root;
		this->invertTree(root->left);
		this->invertTree(root->right);
		TreeNode* temp = root->right;
		root->right = root->left;
		root->left = temp;
		// delete will free the point memory so must set it is NULL
		temp = NULL;
		delete temp;
		return root;
	}
};


int main()
{
    return 0;
}

