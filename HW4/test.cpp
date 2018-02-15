#include "rot13.h"
#include "substitution.h"

int main(){
	Rot13 test1;
	Substitution test2("bfdhmojekixnwqrcltpsauzyvg");					//we are passing the order of our decryption to Substitution
	
	cout<< "Running test 2 " << test2.decrypt("Sem lakdx")<< endl;
	cout<< "Running test 2 " << test2.substitute("Sem lakdx", "bfdhmojekixnwqrcltpsauzyvg")<< endl;
	cout<< "Running test 1 " <<test1.encrypt("Gur")<< endl;
	
	return 0;
}