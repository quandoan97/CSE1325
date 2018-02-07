#include <iostream>

using namespace std;

class Fuse{
private:
	int time = 10;
public:
	Fuse(int time){
		this->time = time;
	}

	bool burn();
	
	string to_string();
};

