#include<iostream>
using namespace std;

void convertCase(string& str)
{
	int len = str.length();
	for(int i=0;i<len;i++)
	{
		if(str[i]>=65 && str[i]<=90)
		{
			str[i]=str[i]+32;
		}
		else if(str[i]>=97 && str[i]<=122)
		{
			str[i]=str[i]-32;
		}
	}
	
}

int main()
{
	string str="GeeksforGeeks";
	
	convertCase(str);     //function calling
	
	cout<<str;
}
