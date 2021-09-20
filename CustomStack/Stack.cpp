#include "Stack.h"

void Stack::Push(int val)
{
	Element* ptrToPreviousElement{ tail };
	tail = new Element{ val, ptrToPreviousElement, nullptr };
	++size;
	
	if (size > 1)
	{
		ptrToPreviousElement->next = tail;
	}
}

int Stack::Pop()
{
	if (Empty())
	{
		return -1;
	}

	int returnVal{ tail->value };

	if (Size() == 1)
	{
		delete tail;
		tail = nullptr;
	}
	else
	{
		tail = tail->previous;
		delete tail->next;
		tail->next = nullptr;
	}

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