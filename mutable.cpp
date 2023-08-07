#include<iostream>
using namespace std;
class fun{
public:
int x;
mutable int y;
fun()
{
x=8;
y=20;
}
};
int main()
{
	const fun obj;
	obj.y=996;
	cout<<obj.y;//we can do this sice y is mutable
	obj.x=85000;//this generates an error since u can't change variable declared in another function
	cout<<x;
	
}
