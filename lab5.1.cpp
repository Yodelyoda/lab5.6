#include <iostream>
#include <cmath>
using namespace std;
double h(const double a, const double b); // ��������
int sum(int x, int y)
{
	return x + y;
}
int main()
{
	double s, t;
	cout << "s = "; cin >> s;
	cout << "t = "; cin >> t;
	double c = (h(pow(s,2), 1+t) + h(1,s*t))/(1+pow(h(s,t),2));
	cout << "c = " << c << endl;
	return 0;
}
double h(const double a, const double b) // ����������
{
	return (a+b+pow(a,2)*pow(b,2)) / (pow(a, 2) + pow(b, 2));
}