#include "cypher.h"

class Substitution:public Cypher{
	private:
		string key;
		string dekey;
	public: 
		Substitution(string key){
			this->key = key;
			dekey = "abcdefghijklmnopqrstuvwxyz";
		}
		
		string encrypt(string unencrypted);
		
		string decrypt(string encrypted);
	
		strint substiutute(string original, string key);
};