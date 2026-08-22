#include<iostream>
using namespace std;
int t,n,m,x,y;
int main()
{
 
cin>>t;
while(t--)
{
cin>>n>>m>>x>>y;
m*=2;
while(--n)
{
cin>>x>>y;
m+=x+y;
}
cout<<m*2<<"
";
}
}