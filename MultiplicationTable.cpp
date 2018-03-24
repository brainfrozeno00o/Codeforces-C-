#include <iostream>
using namespace std;
int n, x, found;
int main(){
	cin >> n >> x;
	for(int i = 1; i <= n; i++) if((x / i <= n)) if(x % i == 0) found++; 
	cout << found;
}