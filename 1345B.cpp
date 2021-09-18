#include<bits/stdc++.h>
 
using namespace std;
 
int binary(vector<int> v, int l, int r, int obj){
	int n=0;
	while(obj>1){
		while(l<r){
			int mid=(l+r)/2;
			if(v[mid]<=obj){
				l=mid+1;
			}
			else{
				r=mid;
			}
		}
		obj+=-v[l-1];
		l=0;
		n++;
	}
	return n;
}
 
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	int a;
	vector<int> v;
	cin>>n;
 	int sum=0;
 	int i=1;
 	int l=0;
 	
	while(sum<1000000000){
		sum+=2*i+i-1;
		v.push_back(sum);
		i++;
	}
	
	
	int r=v.size()-1;
	while(n--){
		int obj;
		cin>>obj;
		int result=binary(v,l,r,obj);
		cout<<result<<endl;
	}	
	
	return 0;
}
