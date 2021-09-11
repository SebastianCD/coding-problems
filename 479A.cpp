#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b,c;
	int w,v,x,y,z,mx;
	
	cin>>a>>b>>c;
	
	v=a+b*c;
	x=a*(b+c);
	y=a*b*c;
	z=(a+b)*c;
	w=a+b+c;
	
	mx=max(v,x);
	mx=max(mx,y);
	mx=max(mx,z);
	mx=max(mx,w);
	
	cout<<mx<<endl;
	
	
	return 0;
}