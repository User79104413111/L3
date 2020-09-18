#include <cmath>
#include <iostream>

using namespace std;

double nomber1_1 ( double a, double b, double c)
{
	return ((b + sqrt(pow(b,2) + 4 * a * c))/ 2 * a) - pow(a,3) * c + pow(b,-2);
}

double nomber1_2 (double a, double b, double c, double d)
{
	return (a * b / c * d) - ((a * b - c) / c * d);
}

double nomber1_3 (double x, double y)
{	
	 return (sin (x) + cos (y)) / (cos (x) - sin (y)) * tan (x * y) ;
}

double nomber1_4 ( double x, double y )
{
	return (( x + y ) / ( y + 1 )) - ( x * y - 12 ) / ( 34 + x );
}

void nomber2_1 ( double x, double y)
{
	cout <<"Напиши длину катет ... ";
	cin >> x;
	cout <<"Напиши длину катета ... ";
	cin >> y;
	double s = (x * y) / 2;
	double a = sqrt(x * x + y * y);
	double p = a + x + y;
	cout <<"Периметр = " << p << "\n Площадь = " << s << "\n";
}

void nomber2_7
{
	cout <<"Напишите значение ";
	cin >> x;
	cout <<"Напишите значение ";
	cin >> y;
	
	// тут переходик небольшой
 cout << "x + y = " << x + y << "\n";
 cout << "x - y = " << x - y << "\n";
 cout << "x * y = " << x * y << "\n";
 cout << "x / n = " << x / y << "\n";
}