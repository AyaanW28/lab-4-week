#include <iostream>
using namespace std;
int main()
{ 
	//Ayaan Waseem-L1F26BSCS0111
	char gradeLetter='A', section='C', initial='M';
	
	cout << "Grade: " << gradeLetter << endl;
	
	cout << "Section: " << section << endl;
	cout << "Initial: " << initial << endl;
	cout << "ASCII code of grade: " << (int)(gradeLetter) << endl;
	cout << "Next Letter: " << (char)(gradeLetter+1) << endl;
	cout << "Grade + 1 without cast: " << gradeLetter + 1 << endl;
	cout << "Letters between A and Z: " << (int)('Z' - 'A') << endl;
	cout << "Grade after A, B and C: " << (char)(gradeLetter + 3);
	return 0;

	//gradeLetter + 1 prints 66 and not B because int is a higher value operator, compiler automatically switches it to int and prints it in integer instead of character
	/*An Error is generated which is - a value of type "const char *" cannot be used to initialize an entity of type "char"
	'initializing': cannot convert from 'const char [2]' to 'char' - This is because char only accepts single quotes. String is required for storing in "".
	'A' is a character while "A" is a string.
	*/


}