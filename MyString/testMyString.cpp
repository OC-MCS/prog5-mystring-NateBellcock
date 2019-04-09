// test driver code goes here
//Nate Bellcock
//04/05/19
//Porgraming Assignment number 5
//Descripton: MyString
#include<iostream>
#include"MyString.h"
using namespace std;


int main()
{
	MyString s1; // this is a test MyString
	s1 = "String";
	MyString s2(" Hi"); // this is a test MyString
	cout << s1 << endl;
	MyString s3; // this is a test MyString
	s3 = s1 + s2;
	cout << s3 << endl;
	MyString s4; // this is a test MyString
	s4 = s1;
	if (s1 == s4)
	{
		cout << "s4 = s1" << endl;
	}
	return 0;

}

