#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int a,b,c,d,n;
	cin>>n;
	vector<long long int> v;
	while(n--){
		cin>>a>>b>>c;
		v.push_back(a);
		v.push_back(b);
		v.push_back(c);
		sort(v.begin(),v.end());
		if(v[2]-1<=v[1]){
			if(v[1]-1<=v[0]){
				d=0;
			}
			else{
				d=abs(v[0]+1-(v[1]-1)) + abs(v[0]+1-(v[2]-1)) + abs(v[2]-1-(v[1]-1));
			}
		}
		else{
			d=abs((v[2]-1)-(v[0]+1)) + abs((v[2]-1)-(v[1]+1)) + abs(v[1]-v[0]);
		}
		cout<<d<<endl;
		v.erase(v.begin(),v.end());
	}
	
	
	
	
	return 0;
}