#include "Stack.h"

Stack::Stack(const Stack& other)
{
	*this = other;
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

	if (rhs.Empty())
	{
		return *this;
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

void Stack::Swap(Stack& other)
{
	if (this == &other)
	{
		return;
	}

	if (Empty() && other.Empty())
	{
		return;
	}

	if (Empty())
	{
		head = other.head;
		tail = other.tail;
		other.head = nullptr;
		other.tail = nullptr;
		size = other.size;
		other.size = 0;
	}
	else if (other.Empty())
	{
		other.head = head;
		other.tail = tail;
		head = nullptr;
		tail = nullptr;
		other.size = size;
		size = 0;
	}
	else
	{
		Element* tempHead{ head };
		Element* tempTail{ tail };
		int tempSize{ size };

		head = other.head;
		tail = other.tail;
		other.head = tempHead;
		other.tail = tempTail;
		size = other.size;
		other.size = tempSize;
	}
}
