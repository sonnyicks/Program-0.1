#include <iostream>
#include "Player.h"
#include <string>
using namespace std;

Player::Player(){
	setName();
	setAge();
	setMoney();
	setTurns();
	setAnswer();
}

void Player::setName(){
	cout << "Name: ";
	cin >> name;
	cout << endl;
}

void Player::setAge(){
	cout << "Age: ";
	cin >> age;
	cout << endl;
}

void Player::setTurns(){
	turns=10;
}

void Player::setAnswer(){
	guess=157;
}

void Player::setOutOfMoney(){
	if(money<=0){
		outOfMoney=true;
	}
}

void Player::setMoney(){
	money=10000;
}

string Player::getName(){
	return name;
}

int Player::getAge(){
	return age;
}

bool Player::getOutOfMoney(){
	return outOfMoney;
}

double Player::getMoney(){
	return money;
}

void Player::print(){
	cout << "Name: " << name << endl
		   << "Age: " << age << endl
			 << "Money: " << money << endl
			 << "Turns left: " << turns << endl;
}

bool Player::makeGuess(){
	cout << "Pick a number between 1 and 1000: ";
	cin >> guess;
	if (guess==answer){
		wins=true;
		return wins;
	}
}

