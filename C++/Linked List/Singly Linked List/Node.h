#pragma once
class Node
{
private:
	int data;
	Node *next;
public:
	Node()
	{
		data = 0;
		next = nullptr;
	}
	~Node()
	{
		while(next)
			delete next;
	}
	void set(int x)
	{
		data = x;
	}
	int get()
	{
		return data;
	}
	void setnext(Node *n)
	{
		next = n;
	}
	Node *getnext()
	{
		return next;
	}
};
