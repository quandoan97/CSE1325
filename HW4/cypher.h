#include <iostream> 

using namespace std;

class Cypher{
	private:
		int chars;
	public:
		Cypher(){}
		
		virtual string encrypt(string unencrypted) = 0;
	
		virtual string decrypt(string encrypted) = 0;
	
		int chars_processed();
	protected:
		//chars_processed(int num);
};
