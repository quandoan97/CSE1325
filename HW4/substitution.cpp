#include "substitution.h"

string Substitution::encrypt(string unencrypted){
	string word = ""; 
	char letter;
	int key_pos; 										//This gives the position for the encrypted key
	int dekey_pos;										//This gives the position for the key (abcde)
	bool to_capital;
	for(int i = 0; i < unencrypted.size(); i++){
		letter = unencrypted.at(i);
		if(letter != ' '){
			if((int)letter >= 65 && (int)letter <= 90){
				to_capital = true;
			}
			letter = tolower(letter);
			for(int j = 0; j < dekey.size(); j++){
				if(letter == dekey.at(j)){
					if(to_capital){
						word += toupper(key.at(j));
						break;
					}else{
						word += key.at(j);
						break;
					}
				}
			}
			to_capital = false;
		}
		else word+= " ";
	}
	return word;
}

string Substitution::decrypt(string unencrypted){
	string word = ""; 
	char letter;
	int key_pos; 										//This gives the position for the encrypted key
	int dekey_pos;										//This gives the position for the key (abcde)
	bool to_capital;
	for(int i = 0; i < unencrypted.size(); i++){
		letter = unencrypted.at(i);
		if(letter != ' '){
			if((int)letter >= 65 && (int)letter <= 90){
				to_capital = true;
			}
			letter = tolower(letter);
			for(int j = 0; j < key.size(); j++){
				if(letter == key.at(j)){
					if(to_capital){
						word += toupper(dekey.at(j));
						break;
					}else{
						word += dekey.at(j);
						break;
					}
				}
			}
			to_capital = false;
		}
		else word+= " ";
	}
	return word;
}

