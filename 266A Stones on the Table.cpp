#include<iostream>
#include<bits/stdc++.h>
#include<string>
using namespace std;

int main()
{
    int n;
    cin>>n;
    getchar();
    string s;
    getline(cin,s);

    int i, sum=0;

    for(i=0;i<n;i++)
    {
        if(s[i]==s[i+1]){sum++;}
    }
    cout<<sum<<endl;






    return 0;
}

