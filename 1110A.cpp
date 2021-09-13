
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int b,k,a,l,odd=0;
	cin>>b>>k;
	
	while(k--){
		cin>>a;
		if(a%2!=0){
			odd++;
		}
	}
	
	if(b%2==0){
		if(a%2==0){
			cout<<"even"<<endl;
		}
		else{
			cout<<"odd"<<endl;
		}
	}
	else{
		if(odd%2==0){
			cout<<"even"<<endl;
		}
		else{
			cout<<"odd"<<endl;
		}
	}
	
	return 0;
}