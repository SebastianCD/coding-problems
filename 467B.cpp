#include<iostream>
using namespace std;
 
int main(){
    int i,n,m,k,dato;
    int bits,corrimiento=0,dif=0,amigos=0;
	cin>>n>>m>>k;
	int jugadores[m+1];
	for(i=0;i<(m+1);i++){
		cin>>dato;
		jugadores[i]=dato;
	}
	for(i=0;i<m;i++){
		bits=jugadores[i] ^ jugadores[m];
		while((1<<corrimiento)<bits){
			if((bits|(1<<corrimiento))==bits){
				dif++;
			}
			corrimiento++;
		}
		if(dif<=k){
			amigos++;
		}
		corrimiento=0;
		dif=0;
	}
	cout<<amigos<<endl;
	return 0;	
}