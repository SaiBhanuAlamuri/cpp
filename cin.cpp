/*It reads a stream of characters of length N into the string buffer, 
It stops when it has read (N – 1) characters or it finds the end of the file or newline character(\n). 
Below is the C++ program to implement cin.getline():*/
 
#include<iostream>
using namespace std;
int main()
{
	char name[100];
	//cin.getline(name,6);
	cin.get(name,5);//(similar to getline)
	cin.read(name,5);//reads n character and stores in variable
	cout<<name;
	
}
