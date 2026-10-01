#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	string a ;
	if ( !(cin>>a)) return 0 ;
	int cur = 1 ;
	int maxs = 1;
	for ( int i  = 1 ; i<a.length();i++){
		if ( a[i]==a[i-1]){
			cur++;
			maxs = max(maxs , cur);
		}else{
			cur = 1;
		}
	}
	if ( maxs>=7){
		cout<<"YES";
	}else{
		cout<<"NO";
	}
	return 0 ;

    
}
