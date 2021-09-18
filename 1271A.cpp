#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	long long int a,b,c,d,e,f, total,total2;
	cin>>a>>b>>c>>d>>e>>f;
	
	total=min(min(b,c),d)*f;
	total+=min(a,d-min(min(b,c),d))*e;
	total2=min(a,d)*e;
	total2+=min(min(b,c),d-min(a,d))*f;
	
	if(total2>total){
		cout<<total2<<endl;
	}
	else{
		cout<<total<<endl;
	}
 
	
	return 0;
}