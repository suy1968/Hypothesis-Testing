#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int ans=0,cur=1;
	while(cur<n){
		ans++;
		cur+=ans;
		}
		cout<<ans<<"\n";
		return 0;
	}
