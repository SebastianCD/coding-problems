#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int a,b,c,mult;
	bool f=false;
	cin>>a>>b>>c;
 
	mult = (c*a+b-1)/b;
	int t;
	t=1;
	
	while(f==false){
		
		if((mult*b)>=((mult-t)*a)){
			
			f=true;
		}
		else{
			
			t++;
				
		}
		
	}
	
	cout<<t<<endl;
	
	return 0;
}