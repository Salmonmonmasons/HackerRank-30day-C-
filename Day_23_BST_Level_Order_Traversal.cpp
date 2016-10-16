#include <iostream>
#include <cstddef>
#include <queue>
#include <string>
#include <cstdlib>

using namespace std;
class Node{
    public:
        int data;
        Node *left,*right;
        Node(int d){
            data=d;
            left=right=NULL;
        }
};
class Solution{
    public:
  		Node* insert(Node* root, int data){
            if(root==NULL){
                return new Node(data);
            }
            else{
                Node* cur;
                if(data<=root->data){
                    cur=insert(root->left,data);
                    root->left=cur;
                }
                else{
                   cur=insert(root->right,data);
                   root->right=cur;
                 }
           return root;
           }
        }
void levelOrder(Node * root)
  {
      queue<Node *> Q;
      Node *n = root;
      //Write your code here

      while(n!= NULL)
      {
          cout << n->data << ' ';
          if(n->left != NULL)
          {
              Q.push(n->left);
          }
          if(n->right != NULL)
          {
              Q.push(n->right);
          }
          if(!Q.empty())
          {
              n=Q.front();
              Q.pop();
          }
          else
          {
              n = NULL;
          }
      }
   }
};//End of Solution
int main(){
    Solution myTree;
    Node* root=NULL;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        root= myTree.insert(root,data);
    }
    myTree.levelOrder(root);
    return 0;
}
