#include <iostream>
using namespace std;
int testCases;
int main(){
	cin >> testCases;
	string results[testCases];
	for(int i = 0; i < testCases; i++){
		int testChunks;
		cin >> testChunks;
		if(testChunks == 1 || testChunks == 2 || testChunks == 4 || testChunks == 5 || testChunks == 8 || testChunks == 11) results[i] = "NO";
		else results[i] = "YES";
	}
	for(int i = 0; i < testCases; i++) cout << results[i] << endl;
}