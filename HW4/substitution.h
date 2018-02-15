#ifndef __SUBSTITUTION_H
#define __SUBSTITUTION_H
#include "cypher.h"

class Substitution:public Cypher{
	private:
		string key;										//This is the key for the encryption that the user will pass in NOT abcdefg
		string dekey;									//This is just abcdefg
	public: 
		Substitution(string key){
			this->key = key;
			dekey = "abcdefghijklmnopqrstuvwxyz";
		}
		
		string encrypt(string unencrypted);
		
		string decrypt(string encrypted);
	
		string substitute(string original, string key);
};
#endif