#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    cin>>a>>b;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>=65 and a[i]<97)
        {
            a[i]+=32;
        }
    }
    for(int i=0;i<a.length();i++)
    {
        if(b[i]>=65 and b[i]<97)
        {
            b[i]+=32;
        }
    }
    // cout<<a<<endl;
    // cout<<b<<endl;
    if(a==b) cout<<"0";
    else if(a>b) cout<<"1";
    else cout<<"-1";
    return 0;
    
}