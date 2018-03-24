#include <iostream>
using namespace std;
int numberOfCubes, previousCubesAdded, height = 0, level = 1, numberOfCubesTotal = 1, cubesToAdd = 1;
int main(){
	cin >> numberOfCubes;
	while(numberOfCubesTotal <= numberOfCubes){
		previousCubesAdded = cubesToAdd;
		++level;
		cubesToAdd = (previousCubesAdded + level);
		numberOfCubesTotal += cubesToAdd;
		height++;
	}
	cout << height;
}