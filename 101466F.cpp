#include<iostream>
 
using namespace std;
 
int main(){
    long long unsigned int n,a,b,c;
    bool triangulo=true;
    cin>>n;
    while(n--){
            cin>>a>>b>>c;
            if(!(a<(b+c) && b<(a+c) && c<(a+b))){
                    triangulo=false;
            }
    }

    if(triangulo)cout<<"YES";
    else cout<<"NO";
    return 0;
}