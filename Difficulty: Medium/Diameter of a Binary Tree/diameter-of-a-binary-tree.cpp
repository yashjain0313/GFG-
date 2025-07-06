/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
    private:
     int find(Node*root,int &ans){
        
        if(!root){
            return 0;
        }
        
        int left=find(root->left,ans);
        int right=find(root->right,ans);
        
        ans=max(ans,right+left);
        
        return 1+ max(left,right);
    }
    public:
  
    int diameter(Node* root) {
        
        int ans=0;
        
        find(root,ans);
        
        return ans;
        
       
    }
};