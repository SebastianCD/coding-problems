#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,k,mult;
	double ang, rad,lad , div;
	cin>>n>>k;
	mult=2*n;
	ang=double(360.0f/mult);
	rad=double((k/2.0)/sin(ang*acos(-1)/180));
	cout<<fixed;
	cout<<setprecision(9)<<double(pow(rad,2)*acos(-1));
	return 0;
}