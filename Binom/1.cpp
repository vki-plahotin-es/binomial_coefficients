#include <iostream>
using namespace std;

int factorial_calc(int p) {
	if (p == 0)
		return 1;
	else
		return factorial_calc(p - 1) * p;
}
int recursion_method(int n, int k){
	int p{ n };
	if (n == k || k == 0)
		return 1;
	else
		return recursion_method(n - 1, k - 1) + recursion_method(n - 1, k);
}

void factorial_method(int n) {
	int result;
	for (int k{ 0 }; k <= n; k++) {
		result = factorial_calc(n) / (factorial_calc(k) * factorial_calc(n - k));
		cout << result << ' ';
	}
}

int main() {
	int n, k{0};
	cin >> n;
	int p = n;
	for (int k{ 0 }; k <= n; k++)
		cout << recursion_method(n, k) << ' ';
	cout << endl;
	factorial_method(n);
}