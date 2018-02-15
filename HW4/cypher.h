#ifndef __CYPHER_H
#define __CYPHER_H

#include <iostream> 

using namespace std;

class Cypher{
	private:
		int _chars;
	public:
		Cypher(){
			_chars = 0;
		}
		
		virtual string encrypt(string unencrypted) = 0;
	
		virtual string decrypt(string encrypted) = 0;
	
		int chars_processed(){
			return _chars;
		};
	protected:
		void chars_processed(int num){
			_chars = _chars + num;	
		}
};
#endif