#include <iostream>
#include <math.h>
using namespace std;

int main() {
float c, f;
cout << "Enter your number x: ";
cin >> c;
if (cin.fail()) {
	cout << "Error type!";
	return 0;
}
if (c >= -3) {
	f = pow(log((c,2)+1),3);
}
else if (c  3) {
	f = atan(1/ 2 * c + 1);
}
else if (c < -3) {
	cout << "Your number is not equal in description, enter your number again";
	return 0;
}
cout << "Your number is:" << f << "\n";
return 0;
}