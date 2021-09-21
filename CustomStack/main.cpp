#include "Stack.h"
#include <iostream>

int main()
{
	Stack s;
	s.Push(2);
	s.Push(3);
	std::cout << s.Top() << std::endl;

	return 0;
}
