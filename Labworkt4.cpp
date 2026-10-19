#include <iostream>
using namespace std;
int main()
{
    
	char first, second, third;
	//Part A
	cout << "Type three characters: ";
	cin.get(first);
	cin.get(second);
	cin.get(third);
	cout << "First : " << "[" << first << "]" << " code " << (int)first << endl;
	cout << "Second : " << "[" << second << "]" << " code " << (int)second << endl;
	cout << "Third : " << "[" << third << "]" << " code " << (int)third << endl;
	

	//Part B
	cout << "Type three characters: ";
	cin >> first >> second >> third;
	cout << "First : " << "[" << first << "]" << " code " << (int)first << endl;
	cout << "Second : " << "[" << second << "]" << " code " << (int)second << endl;
	cout << "Third : " << "[" << third << "]" << " code " << (int)third << endl;
	return 0;

	/*In cin.get, The space is registered and not ignored. However, in cin, the space is ignored and X Y Z are printed. In cin.get, the space is also printed*/
}