#include <iostream>
using namespace std;

int main() {

	int t;
	cin>>t;

	while(t--){
	    int a,b,c, x_rupees;
	    cin>>a>>b>>c>>x_rupees;

	    if((a+b)>=x_rupees | (a+c)>=x_rupees | (b+c)>=x_rupees | (c+a)>=x_rupees){
	        cout<<"YES\n";
	    }
	    else{
	        cout<<"NO\n";
	    }
	}
	return 0;
}

