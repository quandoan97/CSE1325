#ifndef __ROT13_H
#define __ROT13_H
#include "cypher.h"

class Rot13:public Cypher{
	public: 
		Rot13(){}
		
		string encrypt(string unencrypted);
	
		string decrypt(string encrypted);
};
#endif