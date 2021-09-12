#include<bits/stdc++.h>
 
using namespace std;
	
int main(){
	int n,k,r;
	
	queue <int> a;
	cin>>n>>k;
	r=k-1;
	while(n%2==0&&r>0){
		n/=2;
		a.push(2);
		r--;
	}
	for(int i=3;i<=sqrt(n);i=i+2){
		while(n%i==0&&r>0){
			n/=i;
			a.push(i);
			r--;
		}
	}
	if(a.size()+1<k){
		cout<<"-1"<<endl;
	}
	else{
		if(n>1){
		while(!a.empty()){
			cout<<a.front()<<" ";
			a.pop();
		}
		cout<<n<<endl;
	    }
	    else
	    cout<<"-1"<<endl;
	}

    return 0;
}