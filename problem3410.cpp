#include <iostream>
#include <math.h>

using namespace std;

int squares(int n){
	int number = 0;
	for(int i=1; i<=n; i++) number += pow(i, 2);
	return number;
}

int main(){
	int n;
	while(true){
		cin >> n;
		if(n == 0) break;
		else{
			int result = squares(n);
			cout << result << endl;
		}	
	}
	
}
