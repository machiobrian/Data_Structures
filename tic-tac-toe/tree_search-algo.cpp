#include <iostream>
#include <vector>

class Node{
public:
    int value;
    std::vector<Node*> children;

    Node(int value){
        this->value = value;
    }

    void addChild(Node* child){
        children.push_back(child);
    }
};

// search takes on a Node and an integer target as input.
// recursively traverses the tree, searching for a node with the target value.
void search(Node* root, int target){
    if (root->value == target){
        std::cout << "Found target at Node" << root << std::endl;
        return;
    }

    for (Node* child: root->children){
        search(child, target);
    }
}


int main(){

    Node* root = new Node(1);
    Node* child1 = new Node(2);
    Node* child2 = new Node(3);

    Node* grandchild1 = new Node(4);
    Node* grandchild2 = new Node(5);
    Node* grandchild3 = new Node(6);
    Node* grandchild4 = new Node(7);

    root->addChild(child1);
    root->addChild(child2);
    
    child1->addChild(grandchild1);
    child1->addChild(grandchild2);
    child2->addChild(grandchild3);
    child2->addChild(grandchild4);

    search(root, 4);
    return 0;
}