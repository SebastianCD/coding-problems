#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	ios::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
 	int q;
	cin>>q;
	while(q--){
	
	int n;
	cin>>n;
	int arreglo[n];
	int mod3=0,mod1=0,mod2=0, suma=0;
	
	for(int i=0; i<n ; i++){
		cin>>arreglo[i];
		if(arreglo[i]%3==0){
			mod3++;
		}
		else{
			if(arreglo[i]%3==2){
				mod2++;
			}
			else{
				mod1++;
			}
		}
	}
	suma=suma+mod3;
	if(mod2>mod1){
		suma=suma+mod1;
		mod2=mod2-mod1;
		if(mod2!=0&&mod2>=3){
			suma=suma+mod2/3;
		}
	}
	else{
		suma=suma+mod2;
		mod1=mod1-mod2;
		if(mod1!=0&&mod1>=3){
			suma=suma+mod1/3;
		}
		
	}
	
	cout<<suma<<endl;
  }
	
	return 0;
}