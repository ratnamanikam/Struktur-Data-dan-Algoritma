#include <iostream>
#include "BinaryTree.h"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BinaryTree bin;
	
	bin.insertNode(10);
	bin.insertNode(5);
	bin.insertNode(15);
	bin.insertNode(3);
	bin.insertNode(6);
	bin.insertNode(2);
	bin.insertNode(20);
	bin.insertNode(25);
	
	bin.preOrder();
	cout<<endl;
	
	bin.inOrder();
	cout<<endl;
	
	bin.postOrder();
	cout<<endl;
	
	bin.searchNode(20);
	bin.searchNode(30);

	bin.findMax();
	bin.findMin();

	
	return 0;
}