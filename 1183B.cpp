#include<bits/stdc++.h>
using namespace std;

int q,a[200],n,k;
int main(){
	cin>>q;
	while(q--){
		cin>>n>>k;
		for(int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		if(a[n-1]-k>a[0]+k)
			cout<<-1<<endl;
		else
			cout<<a[0]+k<<endl;
	}
	return 0;
}