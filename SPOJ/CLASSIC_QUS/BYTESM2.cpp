#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int h,w;
	    cin>>h>>w;
	    int f[h][w],i,j;
	    for(i=0;i<h;i++)
	    {
	        for(j=0;j<w;j++)
	            cin>>f[i][j];
	    }
	    for(i=1;i<h;i++)
	    {
	        for(j=0;j<w;j++)
	        {
	            if(j!=0&&j!=w-1)
	            {
	                f[i][j]+=max(max(f[i-1][j-1],f[i-1][j]),f[i-1][j+1]);
	            }
	            else if(j==0)
	            {
	                f[i][j]+=max(f[i-1][j],f[i-1][j+1]);
	            }
	            else if(j==w-1)
	            {
	                f[i][j]+=max(f[i-1][j-1],f[i-1][j]);
	            }
	        }
	    }
	    int max=0;
	    for(i=0;i<w;i++)
	    {
	        if(f[h-1][i]>max)
	            max=f[h-1][i];
	    }
	    
	    cout<<max<<endl;
	    /*for(i=0;i<h;i++)
	    {
	        for(j=0;j<w;j++)
	            cout<<f[i][j]<<" ";
	        cout<<""<<endl;
	    }*/
	}
	
	return 0;
}
