#include <iostream>
#include "Player.h"
#include <string>

using namespace std;

int main(){
	Player first;
	first.print();
	char next;
	
while(switch != 'x'){
	cout << "What would you like to do?";
	cin >> next;
	switch(next){
	case 'g':
	first.MakeGuess();

	}
}
	return 0;
}