#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int n,i=0,sum=0,m,k=0;
	double dat;
	cin>>n;
	m=n;
	double array[n];
	while(n--){
		cin>>dat;
		array[i]=dat;
		sum=sum+int (array[i]);
		i++;
	}
	if(sum==0){
		for(int j=0;j<m;j++){
			int a=int(array[j]);
		    cout<<a<<endl;
		}
	}
	else{
		if(sum>0){
			while(sum>0){
				int b=int (array[k]);
				if((array[k]<0)&&abs(array[k]-(b-1))<1){
					array[k]=array[k]-1;
					sum--;
				}
				k++;
			}
			for(int j=0;j<m;j++){
				int a=int(array[j]);
		        cout<<a<<endl;
		    }
		}
		else{
			while(sum<0){
				int b=int (array[k]);
 
				if((array[k]>0)&&abs(array[k]-(b+1))<1){
					array[k]=array[k]+1;
					sum++;
				}
				k++;
			}
			for(int j=0;j<m;j++){
				   int a=int(array[j]);
		           cout<<a<<endl;
	        }
		}
	}
	return 0;
}