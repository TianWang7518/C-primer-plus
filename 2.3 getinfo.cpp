#include <iostream>

int main()
{
	using namespace std;
	
	int carrots;

	cout << "How mant carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more. ";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;
	
	system("pause");

	return 0;
}
