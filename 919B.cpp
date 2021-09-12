#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int k;
	cin>>k;
	int n=0;
	int z,y=0;
	long long int sum=10;
	while(n<k){
		y=0;
		sum+=9;
		z=sum;
		while(z>0){
			y+=z%10;
			z/=10;	
		}
		if(y==10){
			n++;
		}
		
	}
	
	cout<<sum<<endl;
	
	
	return 0;
}