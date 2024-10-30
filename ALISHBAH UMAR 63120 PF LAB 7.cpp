#include<iostream>
using namespace std;
int main()
{
	//5!=5X4X3X2X1=120
	int n;
	long factorial=1.0;
	cout<<"Entre a positiveintegar";
	cin>>n;
	if(n<0)
	{
	cout<<"Error! Factorial of negative number doesnot exist";
}
else
{
	for(int i=1; i<=n; i++)
	factorial*=i;
}
	cout<<"FACTORIAL IS"<<factorial<<endl;
	return 0;
}