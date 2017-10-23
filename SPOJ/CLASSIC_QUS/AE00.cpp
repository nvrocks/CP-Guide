#include <iostream>
using namespace std;
 
int main() 
{
	int n,r=0,i=1;
	cin>>n;
	while((n/i)+1-i>0)
	{
		r+=(n/i)+1-i;
		i++;
	}
	cout<<r;
	return 0;
}
