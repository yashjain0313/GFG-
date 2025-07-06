//User function template for C++

/*
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
*/
//Back-end complete function template for C++

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node)
    {
      
       if(node==NULL){
            return -1;
        }
        return  1+max(height(node->left),height(node->right));
    }
};