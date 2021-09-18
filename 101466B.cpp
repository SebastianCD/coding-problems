#include <bits/stdc++.h>
using namespace std;
int main()
{
        long long unsigned  int n=0, acum=1, aux=1, numaux=0;
        vector<long int> numeros;
        cin>>n;
        for (long int i=0; i<n; i++)
        {
                cin>>numaux;
                numeros.push_back(numaux);
        }
        sort (numeros.begin(), numeros.end());
        for (long int i=(n-1); i>=0; i--)
        {
                acum=acum+(numeros[i]*aux);
                aux=aux*numeros[i];
        }
        cout<<acum;
    return 0;
}