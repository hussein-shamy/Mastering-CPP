#include <iostream>

using namespace std;

int main(void){

	// Store the start and the end of the summation from the user via console

	int num_start {0};
	int num_end {0};

	cout<< "Enter 2 numbers: start and end: ";

	cin>> num_start >> num_end;

	// Calculate the summation using Sum of Integers Formula

	int sum_from_one {0};
	int sum_from_start {0};

	sum_from_one = num_end * ( 1 + num_end ) / 2 ;

	sum_from_start = (num_end-num_start+1) * ( num_start + num_end ) / 2 ;

	// Print the values via console

	cout<< "Sum of numbers from 1 to " << num_end << " = " << sum_from_one << endl ;

	cout<< "Sum of numbers from " << num_start << " to " << num_end << " = " << sum_from_start ;


	return 0;
}
