#include "rot13.h"

string Rot13::encrypt(string uncrypted){
	string word = "";
	for(int i = 0; i < uncrypted.size(); i++){
		if((int)uncrypted.at(i) <= 109){
			word += (char)((int)uncrypted.at(i) + 13);
		}else{
			word += (char)((int)uncrypted.at(i) - 13);
		}
	}
	return word;
}

string Rot13::decrypt(string encrypted){
	string word = "";
	for(int i = 0; i < encrypted.size(); i++){
		if((int)encrypted.at(i) <= 109){
			word += (char)((int)encrypted.at(i) + 13);
		}else{
			word += (char)((int)encrypted.at(i) - 13);
		}
	}
	return word;
}
