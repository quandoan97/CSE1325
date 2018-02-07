#include <fuse.h>

bool burn(){
	time--;
	if(time == 0){
		return false;
	}
	return true;
}

string to_string(){
	if(time == 10){
		cout<<" __*"<<endl;
	}else{
		for(int i = 0; i<time ;i++){
			cout<<" |"<<endl;
		}
	}
	cout<<",+,"<<endl<<"| |"<<endl<<"| |"<<endl"|_|"<<endl;
}
