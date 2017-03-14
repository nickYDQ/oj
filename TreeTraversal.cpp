#include<iostream>
#include<vector>
using namespace std;

//Recursive
void preorder(TreeNode* root,vector<int>& result)
{
	if(root==NULL)
	{
		return;
	}
	result.push_back(root->value);
	preorder(root->left,result);
	preorder(root->right,result);
}
vector<int> preorderTraversal(TreeNode* root) 
{
        vector<int> result;
        preorder(root,result);
        return result;
}
void preOrder2(BinTree *root)     //非递归前序遍历 
{
    stack<BinTree*> s;
    BinTree *p=root;
    while(p!=NULL||!s.empty())
    {
        while(p!=NULL)
        {
            cout<<p->data<<" ";
            s.push(p);
            p=p->lchild;
        }
        if(!s.empty())
        {
            p=s.top();
            s.pop();
            p=p->rchild;
        }
    }
}


//levelTraversal
vector<vector<int>> levelOrder(TreeNode* root)
{
	if(root==NULL)
	{
		return;
	}
	vector<vector<int>> result;
	queue<TreeNode*> que;
    	que.push(root);
	int level = 0;
	while(!que.empty())
	{
		int  size = que.size();
       		result.push_back(vector<int>());
		while(size!=0)
		{
			result[levle].push_back(que.front()->value);
			if(que.front()->left!=NULL)
			{
				que.push(que.front()->left);
			}
			if(que.front()->right!=NULL)
			{
				que.push(que.front()->right);
			}
			que.pop();
			size--;
		}
		level++;
	}
	return result;
}
