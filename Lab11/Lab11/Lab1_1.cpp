#include <iostream>
#include <math.h>
using namespace std;

int main_1(){
float x,y;
cout << "Enter your number x: ";
cin >> x;
if (cin.fail()){
	cout << "Error type!";
	return 0;
}
else
{
	cout << "Enter you number y: ";
	cin >> y;
	if (cin.fail()) {
		cout << "Error type!";
		return 0;
	}
}

float z = (2 * x * y) - sqrt(fabs(sin(pow(x,2) * 2 * pow(y, 2))));
cout << "Your answer: " << z << "\n";
return 0;
}