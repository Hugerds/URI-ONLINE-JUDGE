#include <iostream>
#include <iomanip>
using namespace std;
int main () {
	int a, b, c, d;
	float e, f, g;
	cin >> a >> b >> e;
	cin >> c >> d >> f;
	g= (b*e)+(d*f);
	cout << "VALOR A PAGAR: R$ " << fixed << setprecision (2) << g << endl;
	return 0;
}


