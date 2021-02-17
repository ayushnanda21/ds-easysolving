#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str;
	
	cout<<"Enter the string:"<<endl;
	getline(cin,str);
	
	//push element
	str.push_back('s');
	cout<<str<<endl;
	
	
	
	cout<<"Length of string is :"<<str.length();
	
	str.resize(2);
	cout<<str;
	
	
	
//copy and swap functions in string:
	string str2;
	str2="hello";
	
	char ch[100];
	
	str.copy(ch,3,0);
	
	cout<<"Output is :"<<endl;
	cout<<str;
	
	
	//swap
	str.swap(str2);
	cout<<str;
	cout<<str2;
}
