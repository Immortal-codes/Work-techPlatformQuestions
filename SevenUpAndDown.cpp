#include<iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==7)
		{
			cout<<"EQUAL"<<endl;
		}
		else if(n>7)
		{
			cout<<"UP"<<endl;
		}
		else
		{
			cout<<"DOWN"<<endl;
		}
	}
	return 0;
}