

#include <iostream>
using namespace std;

int Functie(int a) {
	if (a % 3 == 0) {
		if (a == 3) {
			return 3;

		}
		else
			cout << a << " ";
		Functie(a - 3);
	}
}
int main()
{
	int n;
	cin >> n;
	cout << Functie(n);
}

