#include "substitution.h"

string Substitution::encrypt(string unencrypted){
	string word = ""; 
	char letter;
	int key_pos; 										//This gives the position for the encrypted key
	int dekey_pos;										//This gives the position for the key (abcde)
	for(int i = 0; i < unencrypted.size(); i++){
		letter = unencrypted.at(i);
		for(int j = 0; j < dekey.size(); j++){
			if(letter = dekey.at(j)){
				word += key.at(j);
			}else{
				word +=" ";
			}
		}
	}
}