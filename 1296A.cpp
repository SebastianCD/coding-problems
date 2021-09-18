#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	while(n--){
		int k,dat,par=0, impar=0,sum=0;
		cin>>k;
		
		for(int i=0; i<k ; i++){
			cin>>dat;
			sum+=dat;
			if(dat%2==0){
				par++;
			}
			else{
				impar++;
			}
		}
		
		if(impar>=1 && par >= 1){
			cout<<"YES"<<endl;
		}
		else{
			if(sum%2==1){
				cout<<"YES"<<endl;
			}
			else
			cout<<"NO"<<endl;
		}
		
		
	}
	
	
	return 0;
}