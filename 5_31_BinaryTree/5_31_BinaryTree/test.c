#include<stdio.h>
#include<stdlib.h>
#include<assert.h>

#include"Queue.h"

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
	BTNode* node8 = BuyNode(8);



	node1->left = node2;
	node1->right = node4;
	node2->left = node3;
	node4->left = node5;
	node4->right = node6;
	//node5->left = node7;
	node2->right = node7;
	node3->right = node8;

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

// 求二叉树的高度

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

// 二叉树查找值为x的结点
BTNode* BTreeFind(BTNode* root, BTDataType x)
{
	if (root == NULL)
		return NULL;

	if (root->data == x)
		return root;

	BTNode* ret1 = BTreeFind(root->left, x);
	if (ret1)
		return ret1;

	BTNode* ret2 = BTreeFind(root->right, x);
	if (ret2)
		return ret2;

	return NULL;
}


void LevelOrder(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		printf("%d ", front->data);

		if (front->left)
			QueuePush(&q, front->left);

		if (front->right)
			QueuePush(&q, front->right);
	}

	printf("\n");

	QueueDestroy(&q);
}

// 二叉树销毁
void BTreeDestory(BTNode* root)
{
	if (root == NULL)
		return;

	BTreeDestory(root->left);
	BTreeDestory(root->right);
	free(root);
}

// 判断二叉树是否是完全二叉树
bool BTreeComplete(BTNode* root)
{
	Queue q;
	QueueInit(&q);

	if (root)
		QueuePush(&q, root);

	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		// 遇到空就跳出
		if (front == NULL)
			break;

		QueuePush(&q, front->left);
		QueuePush(&q, front->right);
	}

	// 检查后面的节点有没有非空
	// 有非空，不是完全二叉树
	while (!QueueEmpty(&q))
	{
		BTNode* front = QueueFront(&q);
		QueuePop(&q);

		if (front)
		{
			QueueDestroy(&q);
			return false;
		}
	}

	QueueDestroy(&q);
	return true;
}

//int main()
//{
//	BTNode* root = CreatBinaryTree();
//	PrevOrder(root);
//	printf("\n");
//
//	InOrder(root);
//	printf("\n");
//
//	PostOrder(root);
//	printf("\n");
//
//	/*BTreeSize(root);
//	printf("BTreeSize:%d\n", size);
//
//	size = 0;
//	BTreeSize(root);
//	printf("BTreeSize:%d\n", size);
//
//	size = 0;
//	BTreeSize(root);
//	printf("BTreeSize:%d\n", size);*/
//
//
//	printf("BTreeSize:%d\n", BTreeSize(root));
//	printf("BTreeSize:%d\n", BTreeSize(root));
//	printf("BTreeSize:%d\n", BTreeSize(root));
//
//
//	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
//	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
//
//
//	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
//	printf("BTreeLeafSize:%d\n", BTreeLeafSize(root));
//
//	printf("BTreeLevelKSize:%d\n", BTreeLevelKSize(root, 3));
//	printf("BTreeLevelKSize:%d\n", BTreeLevelKSize(root, 4));
//
//	LevelOrder(root);
//
//	printf("BTreeComplete:%d\n", BTreeComplete(root));
//
//
//	BTreeDestory(root);
//	root = NULL;
//
//	return 0;
//}

void InsertSort(int* a, int n)
{
	for (int i = 1; i < n; ++i)
	{
		// [0, end] 有序，插入tmp依旧有序
		int end = i - 1;
		int tmp = a[i];

		while (end >= 0)
		{
			if (a[end] > tmp)
			{
				a[end + 1] = a[end];
				--end;
			}
			else
			{
				break;
			}
		}

		a[end + 1] = tmp;
	}
}