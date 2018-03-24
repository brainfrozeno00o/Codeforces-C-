#include <iostream>
using namespace std;
int a, b, c, i = 1;
int main(){
	cin >> a >> b >> c;
	while(i < 500){
		a *= 10;
		if(a / b == c){
			cout << i;
			return 0;
		}
		a %= b;
		++i;
	}
	cout << -1;
}
