#include <iostream>
#include<math.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--) {
	    long long int n;
	    cin>>n;
	    long long int a[n],sum=0;
	    for(int i=0;i<n;i++) {
	        cin>>a[i];
	    }
	    for(int i=1;i<n;i++) {
	    	sum+=abs(a[i]-a[i-1])-1;
	    	//cout<<a[i]<<a[i-1]<<endl;
		}
	    cout<<sum<<endl;
	}
	return 0;
}
