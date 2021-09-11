#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
    cout.tie(0);
	int k,dat,sum=0,cont=0;
	vector<int> mes;
	cin>>k;
	
	for(int i=0; i<12 ; i++){
		cin>>dat;
		mes.push_back(-dat);
	}
	
	sort(mes.begin(),mes.end());
	
	for(int j=0; j<12 ; j++){
		if(sum<k){
			sum=sum-mes[j];
			cont++;
		}
		else{
			break;
		}
	}
	
	if(sum>=k){
		cout<<cont<<endl;
	}
	else{
		cout<<"-1"<<endl;
	}
	
	return 0;
}