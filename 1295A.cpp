
#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	while(n--){
		int m,r;
		cin>>m;
		if(m%2==0){
			r=m/2;
			for(int i=0; i<r; i++)
			cout<<1;			
		}
		else{
			r=m/2 - 1;
			cout<<7;
			for(int i=0; i<r ; i++)
			cout<<1;
		}
		cout<<endl;
		
	}
	
	return 0;
}