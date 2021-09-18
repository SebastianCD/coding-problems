#include <bits/stdc++.h>
#define lli long long int
using namespace std;
 
queue<lli> conver;
unordered_set<lli> numeros;
 
void show() 
{ 
	stack<lli> orden;
    queue <lli> g = conver; 
    while (!g.empty()) 
    { 
        orden.push(g.front()); 
        g.pop(); 
    } 
    cout<<(lli)(orden.size())<<endl;
    while (!orden.empty())
    {
    	cout<<orden.top()<<" ";
    	orden.pop();
	}
} 
 
 
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	lli k, m;
	cin>>k>>m;
		
	for (lli i=0; i<k; i++)
	{
		lli aux;
		cin>>aux;
		if (numeros.find(aux)!=numeros.end())
		{
			//cout<<"ASD "<< aux<<" ";
			continue;
		}
		if (conver.size() == m)
		{
			numeros.erase( conver.front()  );
			conver.pop();
			conver.push(aux);
		}
		else
		{
			conver.push(aux);
		}
		numeros.insert(aux);
	}
	
	show();
	
	
	return 0;
}