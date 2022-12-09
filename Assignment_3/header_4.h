#include <iostream>
#include <string>

using namespace std;

struct Node {
    int data;  
    Node* left;  
    Node* right;  

    Node(int data) {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

class BinarySearchTree {
private:
    Node* root; 

public:
  
    BinarySearchTree() 
    {
        root = nullptr;
    }

    void insert(int data) 
    {

        Node* newNode = new Node(data);

        if (root == nullptr) 
        {
            root = newNode;
        }
        
        else 
        {
            Node* current = root;  
            Node* parent = nullptr; 

            
            }

            while (current != nullptr) 
            {
                parent = current;
                
                if (data < current->data) 
                {
                    current = current->left;
                }
                else 
                {
                    current = current->right;
                }
            }

            if (data < parent->data) {
                parent->left = newNode;
            }
            else {
                parent->right = newNode;
            }
        }
    }

    string toString() {
        string result = "";
        result += toString(root);
        return result;
    }

private:

    string toString(Node* node) {
        if (node == nullptr) {
            return "NULL\n";
        }
        string result = to_string(node->data) + "\n";
        result += toString(node->left);
        result += toString(node->right);
        return result;
    }
};
