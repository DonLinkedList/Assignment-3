#pragma once
#ifndef BINTREE_H
#define BINTREE_H
#include <cstdlib>
#include <string>

using namespace std;

namespace main_savich_1 {
	class BinTree {
	public:
		//TYPEDEF
		typedef string Item;
		//CONSTRUCTOR
		BinTree();
		//MODIFICATION MEMBER FUNTIONS
		void insert(Item data);
		void display();
	private:
		//NODE DEFINITION
		struct node {
			Item data = "";
			node* right = NULL;
			node* left = NULL;
			//NODE CONSTRUCTOR
			node(Item item) {
				data = item;
				right = NULL;
				left = NULL;
			}
		};
		node* root;
		//PRIVATE MODIFICATION MEMBER FUNCTIONS
		void insert(Item data, node* parent);
		void display(node* parent);
	};
};

#endif