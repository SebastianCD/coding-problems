#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
	int n=0;
	bool flag=true;
	cin>>n;
	cout<<"*";
	int espacio = n-2;
	for (int i=0; i<espacio; i++)
	{
		cout<<" ";
	}
	cout<<"* ";
	for (int i=0; i<n; i++)
	{
		cout<<"*";
	} // Primera linea
	cout<<endl;
	
	for (int i=0; i<espacio; i++)
	{
		for (int x=0; x<2; x++)
		{
			cout<<"*";
			for (int j=0; j<espacio; j++)
			{
				cout<<" ";
			}
			if (flag==true)
			{
				cout<<"* ";
				flag=false;
			}
			else
			{
				cout<<"*";
				flag=true;
			}
			
			
		}
		cout<<"\n";
	}
	
	
	for (int i=0; i<n; i++)
	{
		cout<<"*";
	} 
	cout<<" *";
	for (int i=0; i<espacio; i++)
	{
		cout<<" ";
	}
	cout<<"*";	
	return 0;
}