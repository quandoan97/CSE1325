#include "fuse.h"

bool Fuse::burn(){
	time--;
	if(time == 0){
		return false;
	}
	return true;
}

string Fuse::to_string(){
	string s = "";
	if(time == 10){
		s+=" __*\n";
	}else{
		for(int i = 0; i<time ;i++){
			s+=" |\n";
		}
	}
	s+=",+,\n| |\n| |\n|_|\n";
	return s;
}
