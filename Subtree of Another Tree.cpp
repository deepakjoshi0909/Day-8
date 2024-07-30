class Solution {
public:
    // Helper function to check if two trees are identical
    bool isIdentical(TreeNode* root, TreeNode* subRoot) {
        if (root == NULL && subRoot == NULL) {
            return true;
        }
        if (root == NULL || subRoot == NULL) {
            return false;
        }
        return (root->val == subRoot->val) &&
               isIdentical(root->left, subRoot->left) &&
               isIdentical(root->right, subRoot->right);
    }

    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if (subRoot == NULL) {
            return true;
        }
        if (root == NULL) {
            return false;
        }

        if (isIdentical(root, subRoot)) {
            return true;
        }

        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};
