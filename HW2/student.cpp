#include<iostream>

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

	string name (){
		return student_name;
	}

	void exam (double grade){
		exam_sum += grade;
		exam_num_grades++;
	}

	double average (){		
		if(exam_num_grades == 0) throw std::runtime_error("no grades entered");	
		return exam_sum/exam_num_grades;
	}
};
