#include <iostream>

using namespace std;

int main(void){

	// Get and store the two numbers to be swapped from the user via console
	int num_first {0};
	int num_secound {0};
	cin>> num_first >> num_secound;

	// Create temporary variable to store the 2nd varialbe
	int temp {0};
	temp = num_first;
	num_first = num_secound;
	num_secound = temp;

	// Print it after swapping
	cout<<num_first<<endl <<num_secound;

	return 0;
}
