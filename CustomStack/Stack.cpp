#include "Stack.h"

Stack::Stack(const Stack& other)
{
	if (other.size > 0)
	{
		*this = other;
	}
}

Stack::~Stack()
{
	while (!Empty()) 
	{
		Pop();
	}
}

Stack& Stack::operator=(const Stack& rhs)
{
	if (this == &rhs)
	{
		return *this;
	}

	while (!Empty())
	{
		Pop();
	}

	Element* currentElement{ rhs.head };
	while (currentElement)
	{
		Push(currentElement->value);
		currentElement = currentElement->next;
	}

	return *this;
}

void Stack::Push(int val)
{
	Element* ptrToPreviousElement{ tail };
	tail = new Element{ val, ptrToPreviousElement, nullptr };
	++size;
	
	if (size == 1)
	{
		head = tail;
	}
	else
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

int Stack::Top() const
{
	return tail->value;
}
