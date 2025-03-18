#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node * left;
        Node * right;

        Node(int x){
            data = x;
            left = NULL;
            right = NULL;
        }

        Node(int x, Node *l , Node *r){
            data = x;
            left = l;
            right = r;
        }
};

void Preorder(Node *n){
    if(n==NULL){return;}
    cout<<n->data<<" ";
    if(n->left != NULL){
        Preorder(n->left);
    }
    if(n->right != NULL){
        Preorder(n->right);
    }
}

void Inorder(Node *n){

    // left -> print -> right
    if(n==NULL){return;}
    if(n->left != NULL){
        Inorder(n->left);
    }
    cout<<n->data<<" ";
    if(n->right != NULL){
        Inorder(n->right);
    }
}

void Postorder(Node *n){
    if(n==NULL){return;}
    if(n->left != NULL){
        Postorder(n->left);
    }
    if(n->right != NULL){
        Postorder(n->right);
    }
    cout<<n->data<<" ";
}

int main(){
    ios_base::sync_with_stdio(0),cin.tie(0);
    int n;
    cin>>n;

    unordered_map<int, Node*> nodeMap;

    while(n--) {
        int id, left, right;
        cin >> id >> left >> right;

        if (nodeMap.find(id) == nodeMap.end()) {
            nodeMap[id] = new Node(id);
        }
    
        if (left != -1) {
            if (nodeMap.find(left) == nodeMap.end()) {
                nodeMap[left] = new Node(left);
            }
            nodeMap[id]->left = nodeMap[left];
        }

        if (right != -1) {
            if (nodeMap.find(right) == nodeMap.end()) {
                nodeMap[right] = new Node(right);
            }
            nodeMap[id]->right = nodeMap[right];
        }
    }

    cout<<"Preorder\n";
    Preorder(nodeMap[0]);
    cout<<"\nInorder\n";
    Inorder(nodeMap[0]);
    cout<<"\nPostorder\n";
    Postorder(nodeMap[0]);
}