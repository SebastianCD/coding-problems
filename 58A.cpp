#include<bits/stdc++.h>
 
using namespace std;
 
int main(){
	string s;
	
	cin>>s;
	
	int n=0,i=0;
	
	while(i<s.size()){
		if(s[i]=='h' && n<1){
			n++;
			i++;
			while(i<s.size()){
				if(s[i]=='e' && n<2){
					n++;
					i++;
					while(i<s.size()){
						if(s[i]=='l' && n<3){
							n++;
							i++;
							while(i<s.size()){
								if(s[i]=='l' && n<4){
									n++;
									i++;
									while(i<s.size()){
										if(s[i]=='o' && n<5){
											n++;
										}
										i++;
									}
								}
								i++;	
							}
						}
						i++;
					}
				}
				i++;
			}
		}
		i++;
	}
	
	if(n==5){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	
	return 0;
}