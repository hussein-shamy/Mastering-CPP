#include <iostream>

using namespace std;

int main(void){

	// Define variables to store the students information

	string student_name_1 {"None"};
	string student_name_2 {"None"};

	string student_id_1 {"000"};
	string student_id_2 {"000"};

	float student_math_grade_1 {0};
	float student_math_grade_2 {0};

	// Get the information from the user via console

	cout<< "What is student 1 name: ";
	cin>> student_name_1;
	cout<<endl<< "His id";
	cin>> student_id_1;
	cout<<endl<<"His math exam grade: ";
	cin>> student_math_grade_1;

	cout<<endl<<"What is student 2 name: ";
	cin>> student_name_2;
	cout<<endl<< "His id";
	cin>> student_id_2;
	cout<<endl<<"His math exam grade: ";
	cin>> student_math_grade_2;

	// Print the students grades with average

	cout<<endl<<"Students grades in math\n";
	cout<<student_name_1 << " (with id " << student_id_1 << ") got grade: "<<student_math_grade_1<<endl;
	cout<<student_name_2 << " (with id " << student_id_2 << ") got grade: "<<student_math_grade_2<<endl;
	cout<<"Average grade is " << (student_math_grade_1+student_math_grade_2)/2 ;

	return 0;

}
