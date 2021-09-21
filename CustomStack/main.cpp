#include "Stack.h"
#include <iostream>

int main()
{
	Stack s;
	s.Push(2);
	s.Push(3);
	std::cout << s.Top() << std::endl;

	Stack s2;
	s2.Push(5);
	s2.Push(6);
	s2.Push(7);
	s2.Swap(s);


	return 0;
}
