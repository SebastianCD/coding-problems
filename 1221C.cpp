#include<bits/stdc++.h>
 
using namespace std;
 
int binary(int l,int r, int c, int m, int x){
	int mid,ans=0;
	while(l<=r){
		mid=(r+l)/2;
		if(c+m+x-2*mid>=mid){
			l=mid+1;
			ans=mid;
		}
		else{
			r=mid-1;
		}
	}
	return ans;
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int c,m,x;
	cin>>n;
	int mn;
	while(n--){
		cin>>c>>m>>x;	
		mn=min(c,m);
		cout<<binary(0,mn,c,m,x)<<endl;
	}
	
	return 0;
}