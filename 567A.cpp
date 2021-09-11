#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	
	int n,dat,mini,maxi;
	cin>>n;
	int array[n];
	for(int i=0; i<n; i++){
		cin>>dat;
		array[i]=dat;
	}
	for(int j=0;j<n;j++){
		if(j==0||j==n-1){
			if(j==0) mini=abs(array[1]-array[0]);
			else{
				if(j==n-1){
					mini=abs(array[n-1]-array[n-2]);
				} 
			}
		}
		else{
			mini=min(abs(array[j]-array[j-1]),abs(array[j+1]-array[j]));
		}
		if(j==n-1)maxi=abs(array[n-1]-array[0]);
		else maxi=max(abs(-array[j]+array[0]),abs(-array[n-1]+array[j]));
		
		cout<<mini<<" "<<maxi<<endl;
	}
	
	return 0;
}