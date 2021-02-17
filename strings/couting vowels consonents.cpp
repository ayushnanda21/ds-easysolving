#include<iostream>
using namespace std;
int main()
{
	string str;
	cout<<"Enter string"<<endl;
	getline(cin,str);      //getline() function is used to take input from user
	
	int len=str.length();  //to calculate length of string
	
	//to count vowels,consonants,digits,spaces
	int vowels,consonants,digits,spaces,words=0;
	
	for(int i=0;i<len;i++)
	{
		if(str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
		{
			vowels=vowels+1;
		}
		
		else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))
        {
            ++consonants;
        }
		
		else if (str[i]==' ')
		{
			spaces=spaces+1;
		}
		
		else if(str[i]>='0' && str[i]<='9')
		{
			digits=digits+1;
		}
	}
	
	cout<<"Vowels ="<<vowels<<endl;
	cout<<"Consonants ="<<consonants<<endl;
	cout<<"Spaces ="<<spaces<<endl;
	cout<<"Digits "<<digits;
	
	
	
	
	
	
	
	
	
	
	
}
