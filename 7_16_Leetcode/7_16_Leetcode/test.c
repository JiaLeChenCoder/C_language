//https://leetcode.cn/problems/symmetric-tree/
//����һ���������ĸ��ڵ� root �� ������Ƿ���Գơ�

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool _isSymmetric(struct TreeNode* leftroot, struct TreeNode* rightroot)
{
    if (leftroot == NULL && rightroot == NULL)
        return true;
    if (leftroot == NULL || rightroot == NULL)
        return false;
    if (leftroot->val != rightroot->val)
        return false;
    return _isSymmetric(leftroot->left, rightroot->right) && _isSymmetric(leftroot->right, rightroot->left);

}
bool isSymmetric(struct TreeNode* root) {

    return _isSymmetric(root->left, root->right);

}


//�������ö������ĸ��ڵ� p �� q ����дһ���������������������Ƿ���ͬ��
//����������ڽṹ����ͬ�����ҽڵ������ͬ��ֵ������Ϊ��������ͬ�ġ�
//https://leetcode.cn/problems/same-tree/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */
bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    if (p == NULL && q == NULL)
        return true;
    if (p == NULL || q == NULL)
        return false;
    if (p->val != q->val)
        return false;
    return  isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
}

//���������ÿ���ڵ㶼������ͬ��ֵ����ô�ö��������ǵ�ֵ��������
//ֻ�и��������ǵ�ֵ������ʱ���ŷ��� true�����򷵻� false��
//https://leetcode.cn/problems/univalued-binary-tree/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root) {
    if (root == NULL)
        return true;
    if (root->left && root->left->val != root->val)
        return false;
    if (root->right && root->right->val != root->val)
        return false;
    return isUnivalTree(root->left) && isUnivalTree(root->right);
}


