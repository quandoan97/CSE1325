#include <iostream>
#include "fuse.h"
#include "puzzle.h"

using namespace std;

int main(){
	string solution;
	string buffer;
	cout<<"Enter solution string: ";
	getline(std::cin,solution);
	Puzzle mypuzzle(solution);
	for(int i = 0; i<50; i++){
		cout<<endl;
	}
	
	Fuse myfuse(10);
	char input;
	string answer;
	cout<<"================"<<endl<<"  B O O M !  "<<endl<<"================"<<endl;
	cout<<"Enter in a lowercase letter to guess,"<<endl<<"! to propose a solution"<<endl<<"0 to exit"<<endl;
	cin>>input;
	while(true){
		if(input == '0'){
			cout<<"Aww really dude it took me a while to write this program c'mon keep playing"<<endl;
			break;
		}
		else if(input == '!'){
			cout<<"What is the solution?"<<endl;
			getline(std::cin, buffer);
			getline(std::cin, answer);
			if(mypuzzle.solve(answer)){
				cout<<"*** WINNER WINNER CHICKEN DINNER ***" <<endl;
				break;
			}else{
				cout<<"INCORRECT"<<endl;
				break;								
			}
		}
		else{
			if(mypuzzle.guess(input)){
				myfuse.to_string();
				mypuzzle.to_string();			
			}
			else{
				myfuse.burn();
				myfuse.to_string();
				mypuzzle.to_string();
			}
		}
		cout<<"Enter in a lowercase letter to guess,"<<endl<<"! to propose a solution"<<endl<<"0 to exit"<<endl;	
		cin>>input;
	}
	return 0;
}
