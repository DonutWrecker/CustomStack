#include <conio.h>
#include <iostream>
#include "ChiliString.h"
#include "Stack.h"

int main()
{
	{
		Stack s;

		std::cout << s.Pop() << "\n";
		s.Push(2);
		s.Push(3);
		s.Push(4);
	}
	/*std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";
	std::cout << s.Pop() << "\n";*/

	return 0;
}