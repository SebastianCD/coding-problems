#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
 
    map<long long, long long> count;
    int m = 31;
    long long total(0);
    long long n;
    cin>>n;
    while(n--){
        long long int x; 
        cin>>x;
        long long int t = 1;
        int p = m;
        while(p--){
             t *= 2; total += count[t - x];}
             count[x]++;
        }
 
    cout<<total<<endl;
 
    return 0;
}