#include<bits/stdc++.h>
#include<math.h>
#include<vector>
using namespace std;
int main()
{

    long long int a,b,c,d,e,i,j;
    cin>>a;
    while(a--)
    {

        cin>>b>>c;
        vector<int>v(b);
        auto f=0;
        for(i=0;i<b;i++)
        {
            cin>>v[i];
            if(v[i]==c)
            {
                f=1;
            }
        }
        if(f==1)
        {

            cout<<"YES"<<endl;
        }
        else
            cout<<"NO"<<endl;
    }
}
