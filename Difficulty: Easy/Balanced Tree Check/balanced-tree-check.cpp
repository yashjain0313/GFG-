/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution
{
public:
    bool isBalanced(Node *root)
    {

        if (root == NULL)
            return true; 

        bool l = isBalanced(root->left);
        bool r = isBalanced(root->right);

        bool dif = abs(height(root->left) - height(root->right)) <= 1;

        if (l && r && dif)
            return true;
        else
            return false;
    }

private:
    int height(Node *node)
    {

        if (node == NULL)
        {
            return -1;
        }
        int ans = 1 + max(height(node->left), height(node->right));
        return ans;
    }
};