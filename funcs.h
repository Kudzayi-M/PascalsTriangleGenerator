#pragma once

int var;
unsigned long long int pro = 1;
unsigned long long int x = 0;
unsigned long long int y = 1;
unsigned long long int rIt = 0;
unsigned long long int tempCheck = 0;

unsigned long long int getFactorial(int a) {
	if (a == 1 || a == 0)
		return 1;
	if (a > 1)
		a = a * getFactorial(a - 1);
}


unsigned long long int getCombos(int n, int r) {
	return (getFactorial(n) / ((getFactorial(r)) * getFactorial(n - r)));
}
