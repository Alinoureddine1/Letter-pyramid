#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	string user;
	cout << "Choose a string: ";
	cin >> user;
	int x = (int)user.size();



	for (int i = 1; i <= x; i++) {
		cout << setw(ws) << right;

		cout << endl;
		ws--;
	}


}