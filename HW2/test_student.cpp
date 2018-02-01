#include "student.cpp"
#include <iostream>
#include <string.h>
#include <exception>

using namespace std;

int main(){
//------------------------------- TEST 1
	
	Student test_student("Bjarne Stroustrup");
	test_student.exam(100.0);
	test_student.exam(90.0);
	test_student.exam(80.0);
	
	if(test_student.name().compare("Bjarne Stroustrup")!= 0){
		cout<<"Name not correct"<<endl;
	}

	if(test_student.average() != 90){
		cerr<<"Is not 90"<<endl;
	}
	
//------------------------------- TEST 2
	
	Student nada("Nada");
	try{	
		cout << nada.average() << endl;
	}
	catch (exception &e){
		return 0;
	}
	cerr << "No exception detected when calling average with no exams added" << endl;
}
