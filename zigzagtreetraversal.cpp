#include<iostream>
#include<stack>

using namespace std;

struct Node{
  int data;
  struct Node *left,*right;
}

struct Node* newNode(int data)
{
    struct Node* node = new struct Node;
    node->data = data;
    node->left = node->right = NULL;
    return (node);
}

void zigzagtreetraversal(Node* root){
  stack<Node*> currlevel;
  stack<Node*> nextlevel;
  currlevel.push(root);
  bool lefttoright=true;
  while(!currlevel.empty()){
    Node* temp=currlevel.top();
    currlevel.pop();
    if(temp){
      cout<<temp->data<<" ";
      if(lefttoright){
        if(temp->left){
            nextlevel.push(temp->left);
        }
        if(temp->right){
          nextlevel.push(temp->right);
        }
      }
      else{
       if(temp->right){
            nextlevel.push(temp->right);
        }
        if(temp->left){
            nextlevel.push(temp->left);
        }
      }
      
      if(currlevel.empty()){
        lefttoright=!lefttoright;
        swap(currlevel,nextlevel);
      }
      
    
    }
  }
}

int main(){
  
  struct Node* root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(7);
    root->left->right = newNode(6);
    root->right->left = newNode(5);
    root->right->right = newNode(4);
    cout << "ZigZag Order traversal of binary tree is \n";
 
    zizagtraversal(root);
 
    return 0;

}
