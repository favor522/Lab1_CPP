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
if (c <= -3) {
	f = log((c,2)+1);
}
else{
	f = atan(1/ 2 * c + 1);
}
cout << "Your number is:" << f << "\n";
return 0;
}