#include<iostream>
using namespace std;
enum week
{
	mon,
	tues,
	wed,
	thurs,
	fri,
	sat,
	sun
};
int main()
{
	enum week day;
	day=sat;
	cout<<day;
}
