#include "stdafx.h"
#include "Messege.h"

void Messege::Send(const char* content)
{
	cout << "content : " << content << endl;
}

void Messege::Send(int frequency)
{
	cout << "frequency : " << frequency << endl;
}

void Messege::Send(const char* content, int frequency)
{
	cout << "content : " << content << ", " << "frequency : " << frequency << endl;
}
