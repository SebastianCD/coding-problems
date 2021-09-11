#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b,c;
	
	cin>>a>>b>>c;
	
	
	int t=0;
	
	while(a>0 || b>0 || c>0){
		
		if(a>0){
			a-=2;
			t++;
		}
		else{
			if(b>0 || c>0){
				t++;	
			}
		}
		if(b>0){
			b-=2;
			t++;
		}
		else{
			if(a>0 || c>0){
				t++;	
			}
		}
		if(c>0){
			c-=2;
			t++;
		}
		else{
			if(a>0 || b>0){
				t++;
			}
		}
		
	}
	
	cout<<t+29<<endl;
	
	return 0;
}