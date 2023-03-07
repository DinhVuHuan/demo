#include <iostream>
using namespace std;
int main() {
	int a[2000], n,d, x = 0;
	cin >> n >> d;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < n-1; i++) {

		if (a[i] >= a[i + 1]) 
		{
			x = x + ((a[i] - a[i + 1]) / d + 1);

			a[i + 1] = a[i+1]+((a[i] - a[i + 1]) / d + 1) * d;
		}
	}
	cout << x;
	return 0;
}