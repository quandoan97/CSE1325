#include "cypher.h"

class Rot13:public Cypher{
	public: 
		Rot13(){}
		
		string encrypt(string unencrypted);
	
		string decrypt(string encrypted);
};