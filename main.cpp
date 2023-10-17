#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main() {
	int m, n;
	cin >> m >> n;
	const double k = n;

	double exp = 0;
	double last = 0;
	for (int i = 1; i <= m; i++) {
		double tmp = pow((double)i / m, k);
		exp += (tmp - last) * i; 
		last = tmp; 
	}

	cout << setprecision(12) << exp;
} 
