#include <iostream>
#include <string>
using namespace std;

class Player{
	private:
	int turns;
	int answer;
	int guess;
	double money;
	string name;
	int age;
	bool outOfMoney=false;
	bool wins=false;
	public:
	Player();
	void setName();
	void setAge();
	void setTurns();
	void setAnswer();
	void setOutOfMoney();
	void setMoney();
	string getName();
	int getAge();
	bool getOutOfMoney();
	double getMoney();
	void print();
	bool makeGuess();
};