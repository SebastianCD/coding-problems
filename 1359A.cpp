#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int t;
	
	cin>>t;
	
	while(t--){
		int n,m,k,a;
		
		cin>>n>>m>>k;
		a=n/k;
		if(a<m){
			vector<int> v(k);
			v[0]=a;
			m-=a;
			int i=1;
			while(m>0){
				if(i==k-1){
					m--;
					v[i]++;
					i=1;
				}
				else{
					m--;
					v[i]++;
					i++;
				}
			}
			sort(v.rbegin(),v.rend());
			cout<<v[0]-v[1]<<endl;
		}
		else{
			cout<<m<<endl;
		}
			
	}
	
	return 0;
}