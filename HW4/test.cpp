#include "rot13.h"

int main(){
	Rot13 test1;
	Substitution test2("bfdhmojekixnwqrcltpsauzyvg");					//we are passing the order of our decryption to Substitution
	cout<< test1.encrypt("cat")<< endl;
	cout<< test1.decrypt("png")<< endl;
	return 0;
}