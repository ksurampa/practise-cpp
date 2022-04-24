#include <iostream>
#include "node.h"

using namespace std;

int main (void) {

	Node* pNode = new Node;
	int val(0), sum = {0};

	// Implicitly initialized to empty string
	string str;

	// Variables defined outside of function gets initialized to 0
	// Also called as Default Initialization
	cout << pNode->geti() << endl;

	// To check if char data type is signed or unsigned
	char ch{255};
	cout << (int) ch << endl;

	pNode->seti(10);

	cout << "Hello! Hard work always wins...!" << endl;
	cout << "Value of i in class Node " << pNode->geti() << endl;

	clog << "-------Logging mechanism------" << endl;
	cerr << "-------Error-------" << endl;

	while (cin >> val) {

		sum += val;
	}

	cout << "Sum of all values entered = " << sum << endl;

	delete pNode;

	return -1;
}
