#include "puzzle.h"

bool Puzzle::guess(char c){
	cout << "in guess" << endl;
	if( ((int)c >= 97 && (int)c <= 122) && !guesses[(int)c] ){
		guesses[(int) c] = true;
		return true;
	}else if((int)c >= 'A' && (int)c<= 'Z'){
		cout<<"Enter in a lower case letter."<<endl;
		return true;	
	}else return false;
}

bool Puzzle::solve(string proposed_solution){
	if(proposed_solution.compare(solution) == 0){
		return true;
	}else return false;
}

string Puzzle::to_string(){
	string s = "";
	for(unsigned int i = 0; i < solution.size(); i++){
		if(guesses[(int)solution.at(i)]){
			s+=solution.at(i);
		}

		else if(solution.at(i) == ' '){
			s+=" ";
		}

		else s+="_";
	}
	s+= "\n";
	return s;
}

string Puzzle::get_solution(){
	return solution;
}
