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
	void Push(int val);
	int Pop();
	int Size() const;
	bool Empty() const;
private:
	Element* tail{ nullptr };
	int size{ 0 };
};