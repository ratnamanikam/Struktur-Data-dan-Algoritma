#include <iostream>
#include "BinaryTree.h"

using namespace std;


void BinaryTree::insertNode(int insertVal){
	root = insertNodeRecursive(root, insertVal);
}

Node *BinaryTree::insertNodeRecursive(Node *currentRoot, int insertVal){
	if(currentRoot==NULL){
		currentRoot = new Node();
		currentRoot->val = insertVal;
		return currentRoot;
	}
	if(insertVal < currentRoot->val){
		currentRoot->left = insertNodeRecursive(currentRoot->left, insertVal);
	}
	else if(insertVal > currentRoot->val){
		currentRoot->right = insertNodeRecursive(currentRoot->right, insertVal);
	}
}

void BinaryTree::findMin(){
	minVal = INT_MAX;
    findMinRecursive(root);
    cout << "Nilai Minimal pada Binary Tree: " << minVal << endl;
}

Node BinaryTree::findMinRecursive(Node currentRoot) {
        if (currentRoot != NULL) {
        if (currentRoot->val < minVal){
			minVal = currentRoot->val;
		}
		findMinRecursive(currentRoot->left);
        findMinRecursive(currentRoot->right);
    }
}	

void BinaryTree::findMax(){
	maxVal = INT_MIN;
    findMaxRecursive(root);
    cout << "Nilai Maksimal pada Binary Tree: " << maxVal << endl;
}
	
Node BinaryTree::findMaxRecursive(Node currentRoot) {
        if (currentRoot != NULL) {
        if (currentRoot->val > maxVal){
			maxVal = currentRoot->val;
		}
		findMaxRecursive(currentRoot->left);
        findMaxRecursive(currentRoot->right);
    }
}

void BinaryTree::searchNode(int insertVal) {
    Node* result = searchNodeRecursive(root, insertVal);
		if (result == NULL) {
            cout << "Node Tidak Ditemukan" << endl;
        } 
		else {
            cout << "Node Ditemukan" << endl;
        }
    }
	
Node*BinaryTree::searchNodeRecursive(Node* currentRoot, int insertVal){
    if (currentRoot == NULL || currentRoot->val == insertVal) {
        return currentRoot;
    }
    if (insertVal < currentRoot->val) {
        return searchNodeRecursive(currentRoot->left, insertVal);
    } else {
        return searchNodeRecursive(currentRoot->right, insertVal);
    }
}

void BinaryTree::preOrder(){
	preOrderRecursive(root);
}

Node *BinaryTree::preOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		cout << currentRoot->val<<",";
		preOrderRecursive(currentRoot -> left);
		preOrderRecursive(currentRoot -> right);
	}
}

void BinaryTree::inOrder(){
	inOrderRecursive(root);
}

Node *BinaryTree::inOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		inOrderRecursive(currentRoot -> left);
		cout << currentRoot->val<<",";
		inOrderRecursive(currentRoot -> right);
	}
}

void BinaryTree::postOrder(){
	postOrderRecursive(root);
}

Node *BinaryTree::postOrderRecursive(Node *currentRoot){
	if (currentRoot!=NULL){
		postOrderRecursive(currentRoot -> left);
		postOrderRecursive(currentRoot -> right);
		cout << currentRoot->val<<",";
	}
}