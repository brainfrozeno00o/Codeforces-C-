#include <iostream>
using namespace std;
int stringLength, operations, startIndex, endIndex;
char findChar;
string theString, replaceWithThisChar;
int main(){
	cin >> stringLength >> operations >> theString;
	for(int i = 1; i <= operations; i++){
		cin >> startIndex >> endIndex >> findChar >> replaceWithThisChar;
		for(int i = startIndex - 1; i <= endIndex - 1; i++){
			if(theString.at(i) == findChar) {
				theString.replace(i, 1, replaceWithThisChar);
			}
		}
	}
	cout << theString;
}