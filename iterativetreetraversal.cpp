#include<bits/stdc++.h>

using namespace std;

struct node{
  node* left;
  int data;
  node* right;
};
//if you need a way to do it without any recursion
stack<node*> s;
unordered_map<node*,int> cnt;
void inorderiterative(node* root){
  s.push(root);
  while(!s.empty()){
      node* curr=s.pop()
      if(curr == null) {s.pop(); continue;}
      if(cnt[curr] == 0)s.push(curr->left);
      else if(cnt[curr] == 1)cout<<curr->data<<" ";
      else if(cnt[curr]== 2)s.push(curr->right);
      else s.pop();
   }
}
int main(){

}
