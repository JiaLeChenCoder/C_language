#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

typedef int BTDataType;
typedef struct BinaryTreeNode
{
	BTDataType data;
	struct BinaryTreeNode* left;
	struct BinaryTreeNode* right;
}BTNode;

BTNode* BuyNode(BTDataType x)
{
	BTNode* node = (BTNode*)malloc(sizeof(BTNode));
	if (node == NULL)
	{
		perror("malloc fail");
		return NULL;
	}

	node->data = x;
	node->left = NULL;
	node->right = NULL;

	return node;
}

BTNode* CreatBinaryTree()
{
	BTNode* node1 = BuyNode(1);
	BTNode* node2 = BuyNode(2);
	BTNode* node3 = BuyNode(3);
	BTNode* node4 = BuyNode(4);
	BTNode* node5 = BuyNode(5);
	BTNode* node6 = BuyNode(6);
	BTNode* node7 = BuyNode(7);


	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	node5->left = node7;

	return node1;
}

void PrevOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	printf("%d ", root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
}

void InOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	InOrder(root->left);
	printf("%d ", root->data);
	InOrder(root->right);
}

void PostOrder(BTNode* root)
{
	if (root == NULL)
	{
		printf("N ");
		return;
	}

	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ", root->data);
}

int BTreeSize(BTNode* root)
{
	return root == NULL ? 0 : BTreeSize(root->left)
		+ BTreeSize(root->right) + 1;
}

// 求叶子节点的个数
int BTreeLeafSize(BTNode* root)
{
	if (root == NULL)
	{
		return 0;
	}

	if (root->left == NULL
		&& root->right == NULL)
	{
		return 1;
	}

	return BTreeLeafSize(root->left)
		+ BTreeLeafSize(root->right);
}

int BTreeHeight(BTNode* root)
{
	if (root == NULL)
		return 0;

	int leftHeight = BTreeHeight(root->left);
	int rightHeight = BTreeHeight(root->right);

	return leftHeight > rightHeight ? leftHeight + 1 : rightHeight + 1;
}

// 二叉树第k层结点个数
int BTreeLevelKSize(BTNode* root, int k)
{
	assert(k > 0);

	if (root == NULL)
		return 0;

	if (k == 1)
		return 1;

	return BTreeLevelKSize(root->left, k - 1)
		+ BTreeLevelKSize(root->right, k - 1);
}

int main()
{
	BTNode* root = CreatBinaryTree();
	PrevOrder(root);
	printf("\n");

	InOrder(root);
	printf("\n");

	PostOrder(root);
	printf("\n");

	printf("BTreeSize:%d\n", BTreeSize(root));
	printf("BTreeSize:%d\n", BTreeSize(root));
	printf("BTreeSize:%d\n", BTreeSize(root));

	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));

	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));

	printf("BTreeLevelKSize:%d\n", BTreeLevelKSize(root, 3));
	printf("BTreeLevelKSize:%d\n", BTreeLevelKSize(root, 4));


	return 0;
}