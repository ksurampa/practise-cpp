#include <iostream>
#include "node.h"

using namespace std;

typedef int* pInt;

int main (void) {

	Node* pNode = new Node;
	int val(0), sum = {0};

	int &refVal_1 = val; // refVal refers to (is another name for) val
	int &refVal_2 = refVal_1;

	int* ptr;
	int* &refPtr = ptr;

	refPtr = &val;

	const int ci = 10;
	const int* p2 = &ci;
	const int* const p3 = p2;

	p2 = p3;

	cout << "Value of p3 = " << *p2 << endl;

	cout << "Accessing reference to a pointer - " << *refPtr << endl;

	const pInt typedefInt = &val;
	cout << "typedefInt = " << *typedefInt << endl;

	cout << "Address of val = 0x" << &val 
	     << " Address of refVal_1 = 0x" << &refVal_1
	     << " Address of refVal_2 = 0x" << &refVal_2
	     << endl;
	// Implicitly initialized to empty string
	string str;

	// Variables defined outside of function gets initialized to 0
	// Also called as Default Initialization
	cout << pNode->geti() << endl;

	// To check if char data type is signed or unsigned
	// char ch{255}; // Works on ARM g++ as the char is unsigned by default
	char ch(255); // For it work on x86 as the char is signed by default
	if (ch and_eq 255)
	cout << (int) ch << endl;

	float __Float(0.0);
	{
		float __Float(1.1);
		cout << "Float in block: " << __Float << endl;
		int _ = 100;
		cout << "Value of _ " << _ << endl;
	}

	pNode->seti(10);

	const int row_col = 256 * pNode->geti();
	cout << "Value of const variable row_col = " << row_col << endl;

	constexpr int null = 0;
	int *p1 = (int *)null;

	cout << "Hello! Hard work always wins...!" << endl;
	cout << "Value of i in class Node " << pNode->geti() << endl;

	clog << "-------Logging mechanism------" << endl;
	cerr << "-------Error-------" << endl;

	while (cin >> refVal_1) {

		cout << "Entered Value " << *refPtr << endl;
		sum += val;
	}

	cout << "Sum of all values entered = " << sum << endl;

	delete pNode;

	return -1;
}
