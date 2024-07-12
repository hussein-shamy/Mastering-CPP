#include <iostream>

using namespace std;

int main(){

	// Define two float variables to store the two input numbers from the user

	float first_num{0};

	float secound_num{0};

	// Get the two input numbers from the user via console

	cin>> first_num >> secound_num;

	// Print the basic math operations as requirements

	cout<<first_num << " + " << secound_num << " = " << first_num + secound_num <<endl;

	cout<<first_num << " - " << secound_num << " = " << first_num - secound_num <<endl;

	cout<<first_num << " * " << secound_num << " = " << first_num * secound_num <<endl;

	cout<<first_num << " / " << secound_num << " = " << first_num / secound_num <<endl;

	return 0;

}
