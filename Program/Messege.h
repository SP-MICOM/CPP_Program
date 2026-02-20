#pragma once
class Messege
{
public:
	void Send(const char* content);
	void Send(int frequency);
	void Send(const char* content, int frequency);
};

