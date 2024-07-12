#include <iostream>

using namespace std;

int main(void){

	// Create variables and store the input form the user via the console

	int num1{0},num2{0},num3{0},num4{0},num5{0},num6{0},num7{0},num8{0};

	cin>>num1>>num2>>num3>>num4>>num5>>num6>>num7>>num8;

	// Create variables and store the even and odd position numbers

	int sum_even_integers {0}, sum_odd_integers {0};

	sum_even_integers = num2 + num4 + num6 + num8;

	sum_odd_integers = num1 + num3 + num5 + num7;

	// Print the sum of odd and even positions

	cout<< sum_even_integers;

	cout<< " ";

	cout<< sum_odd_integers;

	return 0;

}
