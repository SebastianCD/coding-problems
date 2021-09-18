#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n;
	cin>>n;
	while(n--){
		string s;
		int sum=0;
		cin>>s;
		vector<int> v;
		for(int i=0; i<s.size(); i++){
			if(s[i]=='1'){
				v.push_back(i+1);
			}	
		}
		
		for(int i=0; i<v.size(); i++){
			if(v[i]+1<v[i+1] && i+1<v.size()){
				sum+=abs(v[i]-v[i+1])-1;
			}
		}
		
		cout<<sum<<endl;;
	}
	return 0;
}