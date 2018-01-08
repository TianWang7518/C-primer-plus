#include <iostream>
#include <climits>
#define ZERO 0
using namespace std;

int main()
{
	short sam = SHRT_MAX;
	unsigned short sue = sam;

	cout << "sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited." << endl << "Add $1 to each account." << endl << "Now ";
	sam++;
	sue++;
	cout << "Sam has " << sam << " dollars annd Sue has " << sue;
	cout << " dollars deposited.\nPoor Sam!" << endl;
	sam = ZERO;
	sue = ZERO;
	cout << "Sam has " << sam << " dollars anndSue has " << sue;
	cout << " dollars deposited.\n";
	cout << "Take $1 from each account." << endl << "Now ";
	sam--;
	sue--;
	cout << "Sam has " << sam << " dollars and Sue has " << sue;
	cout << " dollars deposited.\nLucky Sue\n";
	system("pause");

	return 0;
}
