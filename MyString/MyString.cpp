// MyString implementation file
#include"MyString.h"
#include<iostream>
using namespace std;

//======================================================
// deflet constrtor: 
// parameters: none
//======================================================
MyString::MyString()
{
	ptr = nullptr;
}

//======================================================
// char* constrtor
// parameters: char* p : this is the c string
//======================================================
MyString::MyString(const char* p)
{
	int size = strlen(p) + 1; // this is the size of the new MyString
	ptr = new char[size];
	strcpy_s(ptr, size , p);
	cout << "char* Constrtor\n";
}

//======================================================
// copy constrtor
// parameters: MyString &s this is a MyString we are making a copy of 
//======================================================
MyString::MyString(const MyString &s)
{
	int size = strlen(s.ptr) + 1; // this is the size of the new MyString
	ptr = new char[size];
	strcpy_s(ptr, size, s.ptr);
	cout << "Copy Constrtor\n";
}

//======================================================
// operator=: makes a MyString = to anther MyString
// parameters: MyString &s this is the other MyString
// return type: MyString
//======================================================
MyString MyString::operator= (const MyString &s)
{
	delete[] ptr;
	int size = strlen(s.ptr) + 1; // this is the size of the new MyString
	ptr = new char[size];
	strcpy_s(ptr, size, s.ptr);
	return *this;
}
 
//======================================================
// operator+: tells what a MyString + a MyString is
// parameters: MyString &s this is the other MyString
// return type: MyString
//======================================================
MyString MyString::operator+(const MyString &s)
{
	MyString tep;
	int size = strlen(ptr) + strlen(s.ptr) + 1; // this is the size of the new MyString
	tep.ptr = new char[size];
	strcpy_s(tep.ptr, size, ptr);
	strcat_s(tep.ptr, size, s.ptr);
	return tep;
}

//======================================================
// cStr: gets the c String vrsion of a MyString
// parameters: none
// return type: char*
//======================================================
char* MyString::cStr() const
{
	return ptr;
}

//======================================================
// operator==: tells if two MyString are =
// parameters: MyString &s this is the other MyString
// return type: bool
//======================================================
bool MyString::operator==(const MyString &s)
{
	return !strcmp(ptr, s.ptr);
}

//======================================================
// Destctor: destrors MyString
// parameters: none
//======================================================
MyString::~MyString()
{
	delete[] ptr;
	cout << "Destctor\n";
}

//======================================================
// operator<<: tells how to cout a MyString
// parameters: MyString &s: this is the other MyString
// ostream & o this is the ostream
// return type: ostream
//======================================================
ostream &operator <<( ostream &o, const MyString &s) 
{
	o << s.cStr();
	return o;
}