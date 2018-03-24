#include <iostream>
using namespace std;
int testCases, localExtrema;
int main(){
	cin >> testCases;
	int numbers[testCases];
	for(int i = 0; i < testCases; i++){
		int numberToCheck;
		cin >> numberToCheck;
		numbers[i] = numberToCheck;
	}
	for(int i = 1; i < testCases - 1; i++){
		if((numbers[i] < numbers[i-1] && numbers[i] < numbers[i+1]) || (numbers[i] > numbers[i-1] && numbers[i] > numbers[i+1])) localExtrema++;
	}
	cout << localExtrema;
}