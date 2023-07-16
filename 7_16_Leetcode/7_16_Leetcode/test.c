//https://leetcode.cn/problems/symmetric-tree/
//给你一个二叉树的根节点 root ， 检查它是否轴对称。

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


//给你两棵二叉树的根节点 p 和 q ，编写一个函数来检验这两棵树是否相同。
//如果两个树在结构上相同，并且节点具有相同的值，则认为它们是相同的。
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

//如果二叉树每个节点都具有相同的值，那么该二叉树就是单值二叉树。
//只有给定的树是单值二叉树时，才返回 true；否则返回 false。
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


