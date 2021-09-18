#include <bits/stdc++.h>
 
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int n,a;
	cin>>n;
	long long int array[n][n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
            cin>>array[i][j];
        }
    }
    a=sqrt(array[0][1]*array[0][2]/array[1][2]);
    cout<<a<<" ";
    for(int k=1;k<n;k++){
        cout<<array[k][0]/a<<" ";
    }
    cout<<endl;
    return 0;
}