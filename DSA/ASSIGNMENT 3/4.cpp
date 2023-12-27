#include <bits/stdc++.h>
using namespace std;
class Tree{
    public:
    int data;
    char c;
    Tree* left;
    Tree* right;
    Tree(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }
    Tree(int data,char c){
        this->data=data;
        this->c=c;
        left=NULL;
        right=NULL;
    }
};
void preorder(Tree* root){
    if(root==NULL){
        return;
    }
    preorder(root->left);
    cout<<root->data<<" ";
    preorder(root->right);
}
void printhuffmantreeofstring(string s,int k){
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    priority_queue<pair<int,char>> pq;
    for(auto i:m){
        pq.push({i.second,i.first});
    }
    //not completed


}

int main(){
    string s;
    cin>>s;
    int k;
    cin>>k;
    printhuffmantreeofstring(s,k);
    return 0;
}
