// P06 Password Modifier
//		Replace characters in a simple password to make it stronger
// Samantha Roldan
//

#include <iostream>  
using namespace std;

int main() {
	string password;
	int passLength;
	int i;

	cout << "*** Password Modifier ***";
	cout << endl;

	cout << endl;
	cout << "Enter a password without spaces: ";
	cin >> password;

	while (password != "quit") {
		passLength = password.size();
		for (i = 0; i < passLength; ++i) {
			if (password.at(i) == 'i') {  // replace 1 with 1
				password.replace(i, 1, "1");
			}
			if (password.at(i) == 'a') {  // replace a with @
				password.replace(i, 1, "@");
			}
			if (password.at(i) == 'm') { // replace m with M
				password.replace(i, 1, "M");
			}
			if (password.at(i) == 'B') {  //replace B with 8
				password.replace(i, 1, "8");
			}
			if (password.at(i) == 's') {  //replace s with $
				password.replace(i, 1, "$");
			}
		}
		cout << endl;
		cout << "Modified password is: " << password.append("!") << endl;

		cout << endl;
		cout << "Enter a password without spaces: ";
		cin >> password;
	}

	return 0;
}