#include<iostream>

using namespace std;

class Puzzle{
private:
	string solution;
	bool guesses[255];
public:
	Puzzle(string solution){
		this->solution = solution;
		for(int i = 0; i<guesses.size(); i++){
			guesses[i] = false;
		}
	}
	
	bool guess(char c);

	bool solve(string proposed_solution);

	string to_string();
	
	string get_solution();
};
