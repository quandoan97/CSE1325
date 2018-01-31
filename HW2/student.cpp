#include "student.h"


string Student::name(){
	return student_name;
}

void Student::exam(double grade){
	exam_sum += grade;
	exam_num_grades++;
}

double Student::average(){		
	if(exam_num_grades = 0)throw std:runtime_error;	
	return exam_sum/exam_num_grades;
}
