#include<iostream>;
using namespace std;
int main()
{
	int n;
	long factorial=1.0;
	cout<<"Entre a positive integar";
	cin>>n;
	if(n<0)
	{
		cout<<"Error! factorial of anegative number doesnot exist";
	}
	else
	{
		int i;
		i=1;
		do{
	factorial*=i;
	i++;
		}
		while(i<=n);
		{
		cout<<"factorial of a number"<<factorial<<'='<<n<<'*'<<i<<endl;
	}
	}
 return 0;
}
