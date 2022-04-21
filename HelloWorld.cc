#include <iostream>
#include "node.h"

using namespace std;

int main (void) {

	Node* pNode = new Node();
	int val = 0, sum = 0;

	pNode->seti(10);

	cout << "Hello! Hard work always wins...!" << endl;
	cout << "Value of i in class Node " << pNode->geti() << endl;

	clog << "-------Logging mechanism------" << endl;
	cerr << "-------Error-------" << endl;

	while (cin >> val) {

		sum += val;
	}

	cout << "Sum of all values entered = " << sum << endl;

	return -1;
}
