#include <iostream>

using namespace std;

int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int c = 0;
		while(n >= 5){
			n /= 5;
			c += n;
		}
		cout << c << endl;
	}
}
