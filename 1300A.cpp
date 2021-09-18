#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	while(n--){
		int k,dat,sum=0,cr=0,pas=0;
		cin>>k;
		
		for(int i=0; i<k; i++){
			cin>>dat;
			sum+=dat;
			if(dat==0) cr++;
		}
		
		pas+=cr;
		sum+=cr;
		
		if(sum==0){
			pas++;
		}
		
		cout<<pas<<endl;
		
		
	}
	
	
	return 0;
}