#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, mx=1,cont=1,dat;
	cin>>n;
	vector<int> v;
	
	for(int i=0; i<n ;i++){
		cin>>dat;
		v.push_back(dat);
	}
	
	int l=0;
	int r=1;
	
	int izq=v[l];
	int der=v[r];
	
	while(r<n){
		while(v[r]==izq || v[r]==der){
			r++;
		}
		mx=max(mx,r-l);
		izq=v[r-1];
		der=v[r];
		l=r-1;
		while(v[l]==izq){
			l--;
		}
		l++;
	}
	
	cout<<mx<<endl;
	
	return 0;
}