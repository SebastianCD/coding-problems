#include<bits/stdc++.h>
typedef long long int LL;
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n,m,t,p;
	priority_queue<pair<int, int>,vector<pair<int , int>>, greater<pair<int, int>>> v;
	cin>>n>>m;
	int precios[n],cantidad[n];
	
	for(int i=0; i<n ;i++){
		cin>>cantidad[i];
	}
	for(int i=0; i<n; i++){
		cin>>precios[i];
		v.push(make_pair(precios[i],i+1));
	}
	
	for(int i=0; i<m; i++){
		long long int sum=0;
		cin>>t>>p;
		if(p<=cantidad[t-1]){
			cantidad[t-1]-=p;
			sum+=1ll*p*precios[t-1];
			p=0;
		}
		else{
			sum+=1ll*precios[t-1]*cantidad[t-1];
			p-=cantidad[t-1];
			cantidad[t-1]=0;
			while(p!=0 && !v.empty()){
				if(p<=cantidad[v.top().second-1]){
					cantidad[v.top().second-1]-=p;
					sum+=1ll*p*precios[v.top().second-1];
					p=0;
					if(cantidad[v.top().second-1]==0){
						v.pop();
					}
				}
				else{
					sum+=1ll*precios[v.top().second-1]*cantidad[v.top().second-1];
					p-=cantidad[v.top().second-1];
					cantidad[v.top().second-1]=0;
					v.pop();
				}
			}
		}
		if(p!=0)
		cout<<0<<endl;
		else
		cout<<sum<<endl;
	}
	
	
	return 0;
}