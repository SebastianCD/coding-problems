#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b,c;
	cin>>a>>b>>c;
	
	if(c%(__gcd(a,b))!=0){
		cout<<"NO"<<endl;
		exit(0);
	}
	
	for(int i=0 ; i<=c/a + 1; i++){
		for(int j=0; j<= c/b + 1; j++){
			if((a*i+b*j)==c){
				cout<<"YES"<<endl;
				exit(0);
			}
		}
	}
	cout<<"NO"<<endl;
 
	return 0;
}