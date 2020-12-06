#include "Bintree.h"
#include <cstdlib>
#include <iostream>
#include <cassert>

using namespace std;

//INITIALIZES THE TREE WITH AN EMPTY ROOT
main_savich_1::BinTree::BinTree() {
	root = NULL;
}

//BASIC INSERT THE WORKS IF ROOT IS EMPTY
//OTHERWISE IT PROCEEDS TO THE PRIVATE MEMBER FUNCTION
void main_savich_1::BinTree::insert(Item data) {
	if (root == NULL) {
		root = new node(data);
	}
	else
		insert(data, root);
}

//BASIC PRINT THAT PRINTS THE NODE
//THIS FUNCTION AND OTHER FUNCTION ARE SET TO PRINT IN AN INORDER FASHION
//THEN PROCEEDS TO THE PRIVATE MEMBER FUNTION
void main_savich_1::BinTree::display() {
	if (root != NULL) {
		display(root->left);
		cout << "root: " << root->data << endl;
		display(root->right);
	}
}

//PRIVATE INSERT FUNCTION THAT IS ALLOWED TO READ OTHER NODES
//COMPARES THE DATA GIVEN WITH THE DATA FROM THE NODE
//BASED ON THAT IT CREATES A NEW NODE WITH THE NEW DATA
void main_savich_1::BinTree::insert(Item data, node* parent) {
	if (parent->data != "") {
		if (data > parent->data) {
			if (parent->right == NULL) {
				parent->right = new node(data);
				cout << "inserting " << data << " to the right of " << parent->data << endl;
				return;
			}
			else {
				insert(data, parent->right);
			}
		}
		else if (data <= parent->data) {
			if (parent->left == NULL) {
				parent->left = new node(data);
				cout << "inserting " << data << " to the left of " << parent->data << endl;
				return;
			}
			else {
				insert(data, parent->left);
			}
		}
	}
	else {
		parent->data = data;
	}
}

//PRIVATE DISPLAY FUNCTION THAT IS ALLOWED TO READ OTHER NODES
//FUNCTIONS THE SAME AS THE OTHER DISPLAY FUNCTION
void main_savich_1::BinTree::display(node* parent) {
	if (parent == NULL) {
		return;
	}
	else {
		display(parent->left);
		cout << parent->data << endl;
		display(parent->right);
	}
}