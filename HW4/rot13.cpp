#include "rot13.h"

string Rot13::encrypt(string uncrypted){
	return decrypt(uncrypted);
}

string Rot13::decrypt(string encrypted){
	string word = "";
	for(int i = 0; i < encrypted.size(); i++){
		this->chars_processed(1);
		if(encrypted.at(i) == ' '){
			word += " "; 
			continue;
		}
		if((int)encrypted.at(i) >= 65 && (int)encrypted.at(i) <= 90){
			if((int)encrypted.at(i) <= 77){
				word += (char)((int)encrypted.at(i) + 13);
			}else{
				word += (char)((int)encrypted.at(i) - 13);
			}
			continue;
		}	
		if((int)encrypted.at(i) <= 109){
			word += (char)((int)encrypted.at(i) + 13);
		}else{
			word += (char)((int)encrypted.at(i) - 13);
		}
	}
	return word;
}
