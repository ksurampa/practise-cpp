#include <iostream>
#include "Sales_item.h"
int main()
{
	Sales_item item1, item;

	if (std::cin >> item) {
		while (std::cin >> item1) {
			item += item1;
		}
	}
	std::cout << item << std::endl; // print their sum

	return 0;
}
