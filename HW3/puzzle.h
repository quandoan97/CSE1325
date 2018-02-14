#include<iostream>

using namespace std;

class Puzzle{
private:
	string solution;
	bool guesses[255];
public:
	Puzzle(string solution){
		this->solution = solution;
		for(unsigned int i = 0; i<sizeof(guesses); i++){
			guesses[i] = true;
		}
		for(unsigned int i = 0; i < solution.length(); i++){
			guesses[(int)solution.at(i)] = false;
		}
	}
	
	bool guess(char c);

	bool solve(string proposed_solution);

	string to_string();
	
	string get_solution();
};
