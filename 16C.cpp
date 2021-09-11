#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long int a,b;
	long long int x,y,gcdx;
	cin>>a>>b>>x>>y;
	gcdx=__gcd(x,y);
	x=x/gcdx;
	y=y/gcdx;
	a=a/x;
	b=b/y;
	int aa=min(a,b);
	a=aa*x;
	b=aa*y;
	if(a!=0&&b!=0)
	cout<<a<<" "<<b<<endl;
	else
	cout<<"0 0"<<endl;
	return 0;
}