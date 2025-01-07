
 #include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b,c,d,i;
	cin>>a;
	vector<int>k(a);
	for(i=0;i<a;i++)
	{
	    cin>>k[i];

	}
	 sort(k.begin(),k.end());
	 for(i=0;i<a;i++)
	  {
	      cout<<k[i]<<endl;
	  }
}
