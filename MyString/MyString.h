#pragma once
// MyString class declaration goes here
#include<iostream>
using namespace std;

class MyString
{
private:
	char *ptr;
public:
	MyString();
	MyString(const char* p);
	MyString(const MyString &s);
	MyString operator+(const MyString &s);
	MyString operator=(const MyString &s);
	bool operator==(const MyString &s);
	char* cStr() const;
	~MyString();
};

ostream &operator <<(ostream &o, const MyString &s);