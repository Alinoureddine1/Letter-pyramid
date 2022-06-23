
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

int main() {

	string user;
	cout << "Choose a string: ";
	cin >> user;
	int x = (int)user.size();
	int ws = x;




	for (int i = 1; i <= x; i++) {
		cout << setw(ws) << right;

		for (int j = 0; j < i; j++) {
			cout << user[j];
		};

		if (i > 1) {
			for (int k = i - 2; k >= 0; k--) {
				cout << user[k];
			};


		};

		cout << endl;
		ws--;

	};
}