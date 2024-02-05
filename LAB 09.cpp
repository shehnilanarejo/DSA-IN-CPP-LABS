//Q1:Construct a binary tree (initially empty) , insert nodes 15,10,20,25,8,12 with the help of following definition of Node in BST
//Struct BSTNode{ Int data; BSTNode* left;
//BSTNode* right; } BSTNode* rootPtr;

/*#include <iostream>
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};
BSTNode* newNode(int item) {
    BSTNode* temp = new BSTNode;
    temp->data = item;
    temp->left = temp->right = NULL; // Use NULL instead of nullptr
    return temp;
}
void inorder(BSTNode* root) {
    if (root != NULL) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}
BSTNode* insert(BSTNode* node, int data) {
    if (node == NULL) {
        return newNode(data);
    } else if (data < node->data) {
        node->left = insert(node->left, data);
    } else {
        node->right = insert(node->right, data);
    }
    return node;
}
int main() {
    BSTNode* root = NULL; // Use NULL instead of nullptr
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);
    std::cout << "\nInorder traversal \n";
    inorder(root);
    std::cin.get();
    return 0;
}*/

//Q2:Delete One left-child-node and one right-child- node from above tree. Analyze the change occur in the tree after deletion.

/*
#include <iostream>
struct BSTNode {
    int data;
    BSTNode* left;
    BSTNode* right;
};

BSTNode* newNode(int item) {
    BSTNode* temp = new BSTNode;
    temp->data = item;
    temp->left = temp->right = NULL; // Use NULL instead of nullptr
    return temp;
}

void inorder(BSTNode* root) {
    if (root != NULL) {
        inorder(root->left);
        std::cout << root->data << " ";
        inorder(root->right);
    }
}

BSTNode* insert(BSTNode* node, int data) {
    if (node == NULL) {
        return newNode(data);
    } else if (data < node->data) {
        node->left = insert(node->left, data);
    } else {
        node->right = insert(node->right, data);
    }
    return node;
}
BSTNode* minValueNode(BSTNode* node) {
    BSTNode* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}
BSTNode* deleteNode(BSTNode* root, int data) {
    if (root == NULL) {
        return root;
    } else if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            BSTNode* temp = root->right;
            delete root;
            return temp;
        } else if (root->right == NULL) {
            BSTNode* temp = root->left;
            delete root;
            return temp;
        }
        BSTNode* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}
int main() {
    BSTNode* root = NULL;
    root = insert(root, 15);
    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 25);
    root = insert(root, 8);
    root = insert(root, 12);
    std::cout << "\nInorder traversal \n";
    inorder(root);
    std::cout << "\ndeleted the left node\n";
    root = deleteNode(root, 8);
    std::cout << "\nInorder traversal" << std::endl;
    inorder(root);
    std::cout << "deleted the right node\n";
    root = deleteNode(root, 12);
    std::cout << "Inorder traversal \n";
    inorder(root);
    std::cin.get();
    return 0;
}

*/










































