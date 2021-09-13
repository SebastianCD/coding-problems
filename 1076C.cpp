#include<bits/stdc++.h>
 
using namespace std;
 
 
 
bool conf(double m, double b){
	double a=m-b;
	if(abs((a+b)-a*b)<=(10e-8) && abs((a+b-m))<=(10e-8)){
		return true;
	}
	else{
		return false;
	}
}
 
double binary(double m){
	cout.precision(9);
	double l=0,r=m,mid;
	while(l<r){
		mid=(l+r)/2;
		if(conf(m,mid)){
			return mid;	
		}
		else{
			if(abs((m-mid)*mid)<m){
				l=mid;
			}
			else{
				r=mid;
			}
		}	
	}
	return -0.1;
}
 
 
int main(){
	cout.precision(9);
	int n;
	double m;
	
	cin>>n;
	double result;
	while(n--){
		cin>>m;
		if(m!=0){
			result=binary(m);
			if(result>0){
				cout<<fixed<<"Y"<<" "<<m-result<<" "<<result<<endl;	
			}
			else{
				cout<<"N"<<endl;
			}	
		}
		else{
			cout<<fixed<<"Y"<<" "<<0.0<<" "<<0.0<<endl;
		}
 
	}
	
	return 0;	
	
}