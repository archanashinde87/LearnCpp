//#include<iostream>
//struct Fraction 
//{
//	int numerator{};
//	int denominator{};
//};
//Fraction getFraction()
//{
//	std::cout << "Enter a value for the numerator : ";
//	int num{};
//	std::cin >> num;
//	std::cout << "Enter a value for the denominator : ";
//	int den{};
//	std::cin >> den;
//	std::cout << '\n';
//	return { num, den };
//}
//Fraction multiply(const Fraction& fract1, const Fraction& fract2)
//{
//	return{ fract1.numerator * fract2.numerator, fract1.denominator * fract2.denominator };
//}
//void printFraction(const Fraction& fraction)
//{
//	std::cout << fraction.numerator << '/' << fraction.denominator;
//
//}
//int main()
//{
//	Fraction fraction1{ getFraction() };
//	Fraction fraction2{ getFraction() };
//	std::cout << "Your fractions multiplied together : ";
//	printFraction(multiply(fraction1, fraction2));
//	return 0;
//
//}