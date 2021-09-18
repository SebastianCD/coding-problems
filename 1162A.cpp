#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	int a,b,k=0,dat,i=0,l=0,j=0,ab=0;
	cin>>a>>b;
	while(a--){
		cin>>dat;
		if(dat%2==0){
			i++;
		}
		else{
			l++;
		}
	}
	while(b--){
		cin>>dat;
		if(dat%2==0){
			j++;
		}
		else{
			k++;
		}
	}
	while(i!=0&&k!=0){
		i--;
		k--;
		ab++;
	}
	while(l!=0&&j!=0){
		l--;
		j--;
		ab++;
	}
	cout<<ab<<endl;
	return 0;
}