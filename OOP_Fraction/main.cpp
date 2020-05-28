#include <iostream>
#define TAB "\t\t\t\t"
using namespace std;

class Fraction
{
	double numerator;
	double denominator;
public:
	double get_numerator()const
	{
		return numerator;
	}
	double get_denominator()const
	{
		return denominator;
	}
	void set_numerator(double numerator)
	{
		this->numerator = numerator;
	}
	void set_denominator(double denominator)
	{
		this->denominator = denominator;
	}
	Fraction(double numerator = 31, double denominator = 7)
	{
		cout << TAB "\"Constructor\"" << endl;
		double Fraction;
		this->numerator = numerator;
		this->denominator = denominator;
		cout << "Numerator: " << numerator << endl;
		cout << "Denominator: " << denominator << endl;
		Fraction = numerator / denominator;
		cout << "Construction resusl: " << Fraction << endl;
		cout << endl;
	}
	void operator=(const Fraction& other)
	{
		this->numerator = other.numerator;
		this->denominator = other.denominator;
	}
	~Fraction()
	{

	}
	double Fraction_Methods(Fraction)
	{
		double a_numerator = this->numerator;
		double b_denominator = this->denominator;
		double Fraction = a_numerator / b_denominator;
		return Fraction;
	}
};

void main()
{
	setlocale(LC_ALL, "");
	Fraction A;
	A.set_numerator(31);
	A.set_denominator(7);

	cout << A.get_numerator() << " / " << A.get_denominator() << " = " << A.Fraction_Methods(A) << endl;
	cout << endl;

	cout << A.get_numerator() << endl;
	cout << "___ " << " = " << A.Fraction_Methods(A) << endl;
	cout << A.get_denominator() << endl;

	cout << TAB "\"Copy Construction\"" << endl;
	Fraction B;
	B = A;
}
