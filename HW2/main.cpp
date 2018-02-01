#include <iostream>
#include "student.cpp"

using namespace std;

int main(){
	string student_name;
	cout<<"Enter student name"<<endl;
	getline(cin, student_name);
	
	Student student(student_name);
	
	double grade = 0;
	
	while(grade >= 0){
		cout << "Enter the grade" << endl;
		cin >> grade;
		
		if(grade < 0){
			break;
		}
		
		student.exam(grade);
	}
	
	cout << student.name() + " has an amazing average of ";
	try{
		cout << student.average() << endl;
	}
	catch (exception &e){
		cerr << "possibly a great one but we will never know... (no grades entered)" << endl;	
	}
	
	return 0;
}

