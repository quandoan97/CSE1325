#include<puzzle.h>

bool puzzle::guess(char c){
	if( ((int)c >= 97 && (int)c <= 122) && !guesses[(int)c] ){
		guesses[(int) c] = true;		
		return true;
	}else return false;
}

bool puzzle::solve(string proposed_solution){
	if(propsed_solution == solution){
		return true;
	}else return false;
}

string puzzle::to_string(){
	for(int i = 0; i < solution.size(); i++){
		if(guesses[(int)solution.at[i]]){
			cout<<solution.at[i];
		}else cout<<"_";
	}
}

string puzzle::get_solution(){
	return solution;
}
