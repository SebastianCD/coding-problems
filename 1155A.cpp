#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,s;
	cin>>n>>s;
	int a[2][n];
	
	for(int i=0;i<n;i++){
		cin>>a[0][i];	
	}
	
	for(int i=0;i<n;i++){
		cin>>a[1][i];	
	}
	
	bool f=false;
	int aux=0;
	if(a[0][0]==1){
		if(a[0][s-1]==1){
			cout<<"YES"<<endl;
		}
		else{
			if(a[1][s-1]==1){
				for(int i=s; i<n; i++){
					if(a[0][i]==1 && a[1][i]==1){
						f=true;	
					}
				}
				if(f){
					cout<<"YES"<<endl;
				}				
				else{
					cout<<"NO"<<endl;
				}
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	else{
		cout<<"NO"<<endl;
	}
 
	return 0;
}