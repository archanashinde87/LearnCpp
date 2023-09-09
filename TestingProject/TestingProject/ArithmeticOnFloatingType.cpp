//#include<iostream>
//
//double getDoubleValue()
//{
//	std::cout << "Enter a double value: ";
//	double input{};
//	std::cin >> input;
//	return input;
//
//}
//char getOperation()
//{
//	std::cout << "Enter one of the following : +, -, *, /: ";
//	char operation{};
//	std::cin >> operation;
//	return operation;
//}
//void calculateAndPrint(double x , double y, char operation)
//{
//	if (operation == '+')
//		std::cout << x << "+" << y << " is " << x+y << '\n';
//	if (operation == '-')
//		std::cout << x << "-" << y << " is " << x - y << '\n';
//	if (operation == '*')
//		std::cout << x << "*" << y << " is " << x * y << '\n';
//	if (operation == '/')
//		std::cout << x << "/" << y << " is " << x / y << '\n';
//}
//int main()
//{
//	double x{ getDoubleValue() };
//	double y{ getDoubleValue() };
//
//	char ch{ getOperation() };
//	calculateAndPrint(x, y, ch);
//
//	return 0;
//}