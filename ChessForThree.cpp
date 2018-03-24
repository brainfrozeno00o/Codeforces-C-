#include <iostream>
using namespace std;
int players[] = {1, 2}, spectator[] = {3};
int games, winner, loser, replaceIndex, challenger, legalGames;
bool ifPossible = false;
int main(){
	cin >> games;
	for(int i = 0; i < games; i++){
		cin >> winner;
		for(int j = 0; j < 2; j++){
			if(players[j] == winner){
				if(j == 0) replaceIndex = 1; else replaceIndex = 0;
				ifPossible = true;
			}
		}
		if(ifPossible){
			legalGames++;
			challenger = spectator[0];
			loser = players[replaceIndex];
			players[replaceIndex] = challenger;
			spectator[0] = loser;
		}
		ifPossible = false;
	}
	if(legalGames == games) cout << "YES"; else cout << "NO";
}
