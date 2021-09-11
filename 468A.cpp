#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int n,m;
	cin>>n;
	if(n<=3){
		cout<<"NO"<<endl;
	}
	else{
		if(n%2==0){
			cout<<"YES"<<endl;
			cout<<"1 * 2 = 2"<<endl;
		    cout<<"2 * 3 = 6"<<endl;
		    cout<<"6 * 4 = 24"<<endl;
		    m=n-4;
		    while(m--){
			    cout<<n<<" - "<<n-1<<" = "<<" 1"<<endl;
			    cout<<"24 * 1 = 24"<<endl;
			    m--;
			    n=n-2;
		    }
		}
		else{
			cout<<"YES"<<endl;
			cout<<"2 - 1 = 1"<<endl;
			cout<<"1 + 3 = 4"<<endl;
			cout<<"5 * 4 = 20"<<endl;
			cout<<"20 + 4 = 24"<<endl;
			m=n-5;
			while(m--){
				cout<<n<<" - "<<n-1<<" = "<<" 1"<<endl;
			    cout<<"24 * 1 = 24"<<endl;
			    m--;
			    n=n-2;
			}
		}
	}
	
 
	return 0;
}