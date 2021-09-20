#include <conio.h>
#include <iostream>
#include "ChiliString.h"
#include "Stack.h"

int main()
{
	Stack s;

	std::cout << s.Pop() << "\n";
	std::cout << s.Size() << "\n";
	s.Push(2);
	std::cout << s.Size() << "\n";
	s.Push(3);
	std::cout << s.Size() << "\n";
	s.Push(4);
	std::cout << s.Size() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Size() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Size() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Size() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Size() << "\n";
	

	return 0;
}