#pragma once

class Stack
{
private:
	struct Element
	{
		int		 value;
		Element* previous;
		Element* next;
	};
public:
	 Stack()			 = default;
	 Stack(const Stack&) = delete;
	~Stack();

	Stack& operator=(const Stack&) = delete;

	void Push(int val);
	int  Pop();
	int  Size() const;
	bool Empty() const;
private:
	Element* tail{ nullptr };
	int		 size{ 0 };
};