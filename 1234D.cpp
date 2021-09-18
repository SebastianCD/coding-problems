#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;
	int q,l,r,tipo,pos;
	char u;
	cin>>s>>q;
	
	vector<set<int>> v(26);
	
	for(int i=0; i<s.size(); i++){
		v[s[i]-'a'].insert(i);
	}	
	
	
	
	while(q--){
		int cont=0;
		cin>>tipo;
		if(tipo==1){
			cin>>pos>>u;
			for(int i=0; i<26 ;i++){
				if(v[i].count(pos-1)!=0){
					v[i].erase(pos-1);
					v[u-'a'].insert(pos-1);
				}
			}
		}
		else{
			cin>>l>>r;
			for(int i=0; i<26 ;i++){
				auto t = v[i].lower_bound(l-1);
				if (t!=v[i].end() && *t<=r-1) {
					cont++;
				}
			}
			cout<<cont<<endl;	
		}
	}
	
	
	return 0;
}