#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int num;
	//input the number you want square root of..
	cin>>num;
	int p=2;
	//p is the number of digits you want after decimal..
	//here p is 2 you can scan according to your necessity..
	float ans=0;
	int start=0,end=num;
	int mid;
	while(start<=end) {
		mid=(end+start)/2;
		if(mid*mid==num) {
			ans=mid;
			break;
		}
		else if(mid*mid<num) {
			start=mid+1;
			ans=mid;
		}
		else {
			end=mid-1;
		}
	}
	//here the ans got the integer value..(the value before decimal)
	float decimal=0.1;
	for(int i=0;i<p;i++) {
		while(ans*ans<=num) {
			ans=ans+decimal;
		}
		ans=ans-decimal;
		decimal=decimal/10;//so that for p=2 it start from 0.01 and so on...
	}
	//with the end of this loop we will get the answer having p digits after decimal...
	cout<<ans;
	
}
