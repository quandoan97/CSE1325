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
	
	s+=" *\n";
	
	for(int i = 1; i<time ;i++){
		s+=" |\n";

	}
	s+=",+,\n| |\n| |\n|_|\n";
	return s;
}
