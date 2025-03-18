#include <iostream>
#include <unordered_map>
#include <string>
#include <algorithm>
 
using namespace std;
 
class Node {
public:
    int id;
    int left;
    int right;
    int parent;
    int depth;
    int height;
 
    Node(int id = -1)
        : id(id), left(-1), right(-1), parent(-1), depth(0), height(0) {}
};
 
class BinaryTree {
private:
    unordered_map<int, Node*> nodes;
    int rootId;
 
    // Calculate the depth of each node in the tree
    void calculateDepth(int id, int depth) {
        if(id==-1){
            return;
        }
        nodes[id]->depth = depth;
        calculateDepth(nodes[id]->left , depth + 1);
        calculateDepth(nodes[id]->right , depth + 1); 
    }
 
    // Calculate the height of the subtree rooted at a given node
    int calculateHeight(int id) {
        if(id==-1){
            return -1;
        }
        int leftHeight = calculateHeight(nodes[id]->left);
        int rightHeight = calculateHeight(nodes[id]->right);
        nodes[id]->height = max(leftHeight,rightHeight) + 1;
        return nodes[id]->height;
    }
 
    // Determine the type of the node
    string getNodeType(int id) {
        if(nodes[id]->parent == -1){
            return "root";
        }
        if(nodes[id]->left == -1 && nodes[id]->right == -1){
            return "leaf";
        }
        return "internal node";
    }
 
    // Get the sibling of a given node
    int getSibling(int id) {
        int parent = nodes[id]->parent;
        if(parent==-1){
            return -1;
        }
        if(nodes[parent]->left != id && nodes[parent]->left != -1){
            return nodes[parent]->left;
        }
        if(nodes[parent]->right != id && nodes[parent]->right != -1){
            return nodes[parent]->right;
        }
        return -1;
    }
 
    // Find the root of the tree
    void findRoot() {
        for(auto &entry : nodes){
            if(entry.second->parent == -1){
                rootId = entry.first;
                break;
            }
        }
    }
 
public:
    BinaryTree() : rootId(-1) {}
 
    // Add a node and set its connections
    void addNode(int id, int left, int right) {
        if(nodes.find(id) == nodes.end()){
            nodes[id] = new Node(id);
        }
        nodes[id]->left = left;
        nodes[id]->right = right;

        if(left != -1){
            if(nodes.find(left) == nodes.end()){
                nodes[left] = new Node(left);
            }
            nodes[left]->parent = id;
        }

        if(right != -1){
            if(nodes.find(right) == nodes.end()){
                nodes[right] = new Node(right);
            }
            nodes[right]->parent = id;
        }

    }
 
    // Calculate all properties of the tree (depths, heights)
    void calculateProperties() {
        findRoot();
        calculateDepth(rootId,0);
        calculateHeight(rootId);
    }
 
    // Print information for all nodes
    void printNodeInfo() {
        for(int i=0;i<nodes.size();++i) {
            int degree=0;
            if(nodes[i]->left!=-1) degree++;
            if(nodes[i]->right!=-1) degree++;
            cout<<"node "<<i<<": parent = "<<nodes[i]->parent<<", sibling = "<<getSibling(i)<<", degree = "<<degree<<", depth = "           <<nodes[i]->depth<<", height = "<<nodes[i]->height<<", "<<getNodeType(i)<<endl;
        }
    }
};
 
int main() {
    int n;
    cin >> n;
    BinaryTree tree;
 
    for (int i = 0; i < n; ++i) {
        int id, left, right;
        cin >> id >> left >> right;
        tree.addNode(id, left, right);
    }
 
    tree.calculateProperties();
    tree.printNodeInfo();
 
    return 0;
}