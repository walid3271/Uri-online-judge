#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    string a,b,c;
    while(t--)
    {
        cin>>a>>b>>c;
        if(a=="sorte" && b=="torre")
            cout<<Y<<endl;
        else if(a=="norte" && b=="forte")
            cout<<N<<endl;
    }
    return 0;
}
