#include "substitution.h"

string Substitution::encrypt(string unencrypted){
	string word = ""; 
	char letter;
	int _key_pos; 										//This gives the position for the encrypted _key
	int _dekey_pos;										//This gives the position for the _key (abcde)
	bool to_capital;
	for(int i = 0; i < unencrypted.size(); i++){
		letter = unencrypted.at(i);
		if(letter != ' '){
			if((int)letter >= 65 && (int)letter <= 90){
				to_capital = true;
			}
			letter = tolower(letter);
			for(int j = 0; j < _dekey.size(); j++){
				if(letter == _dekey.at(j)){
					if(to_capital){
						word += toupper(_key.at(j));
						break;
					}else{
						word += _key.at(j);
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
	int _key_pos; 										//This gives the position for the encrypted _key
	int _dekey_pos;										//This gives the position for the _key (abcde)
	bool to_capital;
	for(int i = 0; i < unencrypted.size(); i++){
		letter = unencrypted.at(i);
		if(letter != ' '){
			if((int)letter >= 65 && (int)letter <= 90){
				to_capital = true;
			}
			letter = tolower(letter);
			for(int j = 0; j < _key.size(); j++){
				if(letter == _key.at(j)){
					if(to_capital){
						word += toupper(_dekey.at(j));
						break;
					}else{
						word += _dekey.at(j);
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

string Substitution::substitute(string original, string key){
	string word = ""; 
	char letter;
	int _key_pos; 										//This gives the position for the encrypted _key
	int _dekey_pos;										//This gives the position for the _key (abcde)
	bool to_capital;
	for(int i = 0; i < original.size(); i++){
		letter = original.at(i);
		if(letter != ' '){
			if((int)letter >= 65 && (int)letter <= 90){
				to_capital = true;
			}
			letter = tolower(letter);
			for(int j = 0; j < key.size(); j++){
				if(letter == key.at(j)){
					if(to_capital){
						word += toupper(_dekey.at(j));
						break;
					}else{
						word += _dekey.at(j);
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
















