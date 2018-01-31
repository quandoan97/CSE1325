#ifndef STUDENT_H__
#define STUDENT_H__

#include <iostream>
#include <exception>

using namespace std;

class Student{
private:
	string student_name;
	double exam_sum;
	double exam_num_grades;
public:
	Student(string name){
		this->student_name = name;
		this->exam_sum = 0;
		this->exam_num_grades = 0;
	}

	string name ();
	void exam (double grade);
	double average ();
};

#endif
