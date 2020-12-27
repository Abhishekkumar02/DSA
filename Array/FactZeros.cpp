#include <iostream> 
using namespace std; 
int main() 
{ 
	int n,i;
    cin>>n; 
    int count = 0; 
	for (i = 5; n / i >= 1; i *= 5) 
		count += n / i; 

	cout<<count;
	return 0; 
} 
