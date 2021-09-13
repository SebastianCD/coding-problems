#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	int n,k;
	cin>>n;
	string s;
	while(n--){
		cin>>k;
		cin>>s;
		if(k==2){
			if(s[0]-'0'<s[1]-'0')
			{
				cout<<"YES"<<endl;
				cout<<2<<endl;
				cout<<s[0]<<" "<<s[1]<<endl;
			}
			else cout<<"NO"<<endl;
		}
		else{
			cout<<"YES"<<endl;
			cout<<2<<endl;
			cout<<s[0]<<" ";
			for(int i=1; i<k ; i++)
			    cout<<s[i];
			cout<<endl;
		}	
		
	}
	
	return 0;
}