#include "stdafx.h"
#include "iostream"
#include "math.h"
using namespace std;

int main()
{
	float a, b, c;
	cout << "podaj zakres liczb\n";
	cin >> a >> b;
	c = sqrt(a);
	if (fmod(c, 1) == 0) {
		cout << a << endl;
		c++;
	}
	else {
		c = ceil(sqrt(a));
	}
	do {
		if (pow(c, 2) <= b) {
			cout << pow(c, 2) << endl;
			c++;
		}
		else {
			break;
		}
	} while (1);
    return 0;
}

