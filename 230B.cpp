#include<bits/stdc++.h>
 
using namespace std;
 
vector<int>v2;
 
int criba(){
	vector<int> v;
	int n=10e6;
	for(int i=0; i<=n; i++){
		v.push_back(i);
	}
	int j;
	for(int i=2; i<=n; i++){
		j=i;
		if(v[j]>0){
			v2.push_back(v[j]);
			while(i+j<=n){
				j+=i;
				v[j]=0;
			}	
		}	
	}
	return 0;
}
 
bool binary(long long int n){
	int l=0,mid,r=v2.size();
	double m=sqrt(n);
	if(floor(m)!=m){
		return false;
	}
	else{
		while(l<r){
			mid=(l+r)/2;
			if(m<=v2[mid]){
				if(m==v2[mid]){
					return true;
				}
				r=mid;
			}
			else{
				l=mid+1;
			}
		}
		return false;
	}
}
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	criba();
	int n;
	long long int dat;
	cin>>n;
	while(n--){
		cin>>dat;
		if(dat==1){
			cout<<"NO"<<endl;
		}
		else{
			if(binary(dat)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}