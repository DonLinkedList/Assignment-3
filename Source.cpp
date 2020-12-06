//DON LOVETT
//CS3305-04
//ASSIGNMENT 3

#include "Bintree.h"
#include <cstdlib>
#include <iostream>

using namespace std;
using namespace main_savich_1;

int main() {
	
	BinTree* s = new BinTree;
	//INSERTING ITEMS
	s->insert("blueberry");
	s->insert("peach");
	s->insert("apricot");
	s->insert("pear");
	s->insert("cherry");
	s->insert("mango");
	s->insert("papaya");
	cout << endl;
	//PRINTING ITEMS TO CONSOLE
	s->display();

	return EXIT_SUCCESS;
}