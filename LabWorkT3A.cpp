#include <iostream>
using namespace std;
int main()
{
	char firstInitial, middleInitial, lastInitial;
	cout << "Enter your first initial: ";
	cin >> firstInitial;
	cout << "Enter your middle initial: ";
	cin >> middleInitial;
	cout << "Enter your last initial: ";
	cin >> lastInitial;
	cout << "Badge: " << firstInitial << "." << middleInitial << "." << lastInitial << ".";
	return 0;
	
}