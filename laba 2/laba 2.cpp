// Lab_02.cpp
// Іванів Олександр Андрійович 
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 9
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
	double x, y, z1, z2 = 0;
 cout << "X: ";
 cin >> x;
 cout << "Y: ";
 cin >> y;
 z1 = pow(cos(x) - sin(y), 2) - pow(sin(x) - cos(y), 2);
 z2 = -4 * (sin(x - y / 2) * sin(x - y / 2)) * cos(x + y);
 cout << "z1= " << z1 << endl;
 cout << "z2= " << z2 ;
 return 0;
}