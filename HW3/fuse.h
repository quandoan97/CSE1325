#include <iostream>

using namespace std;

class Fuse{
private:
	int time;
public:
	Fuse(int time){
		this->time = time;
	}

	bool burn();
	
	string to_string();
};

