#pragma warning(disable: 4820)
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
	 Stack() = default;
	 Stack(const Stack& other);
	~Stack();

	Stack& operator=(const Stack& rhs);

	void Push(int val);
	int  Pop();
	int  Size() const;
	bool Empty() const;
	int	 Top() const;
private:
	Element* head{ nullptr };
	Element* tail{ nullptr };
	int		 size{ 0 };
};