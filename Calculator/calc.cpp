 /*
  * AppName: Simple Calculator
  * Author: Lloyd Folks
  * Version: 1
  */

#include <iostream>
using namespace std;

main() {

	// Define variable data types
    char sign;
    double value1, value2;
    double equals;
    
	// Ask/Answer Questions TODO: Work on validating user input
    cout << "Please enter the operation (+, -, /, or *): ";
    cin >> sign;
    cout << "You entered this operation: " << sign << endl;
    
    cout << endl << "Please enter value 1: ";
    cin >> value1;
    cout << "You entered this value: " << value1 << endl;
	
	cout << endl << "Please enter value 2: ";
    cin >> value2;
    cout << "You entered this value: " << value2 << endl;
	
	if(sign == '+'){
		equals = value1 + value2;
		cout << endl << value1 << " plus " << value2 << " equals: " << equals;
	}else if(sign == '-'){
		equals = value1 - value2;
		cout << endl  << value1 << " minus " << value2 << " equals: " << equals;	
	}else if(sign == '*'){
		equals = value1 * value2;
		cout << endl << value1 << " times " << value2 << " equals: " << equals;
	}else if(sign == '/'){
		equals = value1 / value2;
		cout << endl << value1 << " divided by " << value2 << " equals: " << equals;	
	}else if(sign){
		cout << endl << "Invalid Operation...goodbye!";
	}
	
	/* Test case for switch vs if statement...
	switch(sign){
		case '*':
			equals = value1 * value2;
			cout << value1 << " times " << value2 << " equals: " << equals;
			break;
		case '/':
			equals = value1 / value2;
			cout << value1 << " divided by " << value2 << " equals: " << equals;
			break;
		case '+':
			equals = value1 + value2;
			cout << endl << value1 << " plus " << value2 << " equals: " << equals;
			break;
		case '-':
			equals = value1 - value2;
			cout << endl  << value1 << " minus " << value2 << " equals: " << equals;
			break;
		default:
			cout << endl << "Invalid Operation...goodbye!";
	}
	*/
}
