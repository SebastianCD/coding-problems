#include<bits/stdc++.h>
 
using namespace std;
 
void divisores(int a);
void sionovrga();
 
int n;
vector <pair <int,int> > aarray;
vector <int> divi;
set<int> m;
 
int main(){
	ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
	int a,b;
	cin>>n;
	for(int i=0; i<n ;i++){
		cin>>a>>b;
		aarray.push_back(make_pair(a,b));
	}
	sort(aarray.rbegin(), aarray.rend());
	divisores(aarray[0].first);
	sionovrga();
	divisores(aarray[0].second);
	sionovrga();
	cout<<"-1"<<endl;
	return 0;
}
 
void divisores(int a){
	aarray.clear();
	for(int i=1; i<sqrt(a)+1; i++){
		if(a%i==0) {
		 	divi.push_back(i);
		 	if(a/i!=i){
				divi.push_back(a/i);	
			} 
	    }
	}
	sort(divi.begin(), divi.end());	
}
 
void sionovrga(){
	
	for(int i=0; i<divi.size() ; i++){
		if(divi[i] == 1)
      continue;
		int cont=0;
		int x = divi[i];
 
    if(m.count(x) == 1)
      continue;
    m.insert(x);
		for(int j=0; j<n ; j++){
			if(aarray[j].first%divi[i]==0 || aarray[j].second%divi[i]==0){
				cont++;
			}
			else{
				break;
			}
		}
		if(cont==n){
			cout<<divi[i]<<endl;
			exit(0);
		}
		
	}
}