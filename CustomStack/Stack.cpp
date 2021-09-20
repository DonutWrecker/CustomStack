#include "Stack.h"

void Stack::Push(int val)
{
	Element* ptrToPreviousElement{ tail };
	tail = new Element{ val, ptrToPreviousElement, nullptr };

	if (ptrToPreviousElement)
	{
		ptrToPreviousElement->next = tail;
	}

	++size;
}

int Stack::Pop()
{
	if (Empty())
	{
		return -1;
	}

	int returnVal{ tail->value };
	tail = tail->previous;

	--size;

	return returnVal;
}

int Stack::Size() const
{
	return size;
}

bool Stack::Empty() const
{
	return size == 0;
}