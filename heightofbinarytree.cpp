#include<iostream>
/*recursive implimentation of height of binary tree
  --->if root == NULL:
          return 0
       then find max from left side of the tree and then find max height from right side of the tree compare and add +1 and return which one is the greater one.
       
       
       simple and easy
*/
using namespace std;
struct Node {
  int data;
  struct Node *left,*right;
};

int heightoftree(Node* root){
  if(root == NULL)
    return 0;
  int left=heightoftree(root->left);
  int right=heightoftree(root->right);
  if(left>right){
    return left+1;
  }
  else{
  return right+1;
  }
}

Node* newNode(int data)
{
    Node* Node = new struct Node;
    Node->data = data;
    Node->left = NULL;
    Node->right = NULL;
     
    return(Node);
}
int main(){
  Node *root = newNode(1);
 
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
     
    cout << "Height of tree is " << heightoftree(root);
    return 0;
}
