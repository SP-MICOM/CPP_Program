#pragma once

template<typename T>

class Container
{
protected:
	int size;
	int index;

	T* list;
public:
	Container(int allocateSize);

	void Push(T data);

	~Container();
};
