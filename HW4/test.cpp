#include "rot13.h"
#include "substitution.h"

int main(){
	Rot13 test1;
	Substitution test2;					//we are passing the order of our decryption to Substitution
	
	cout<< test2.encrypt("The")<< endl;
	cout<< test1.decrypt("png")<< endl;
	return 0;
}