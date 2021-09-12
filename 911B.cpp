#include<bits/stdc++.h>
 
using namespace std;
 
bool check(int m,int a, int b, int n){
	int i;
	if(a/m>0 && b/m>0){
		i=a/m + b/m;
		if(i>=n){
			return true;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
 
	
}
 
int binary(int l, int r, int a, int b, int n){
	int mid,ans=0;
	while(l<=r){
		mid=(r+l)/2;
		if(check(mid,a,b,n)){
			ans=max(ans,mid);
			l=mid+1;
		}
		else{
			r=mid-1;
		}
	}
	return ans;
}
 
int main(){
	int n,a,b;
	cin>>n>>a>>b;
	int r;
	r=max(a,b);
	cout<<binary(1,r,a,b,n)<<endl;
	
	return 0;
}
