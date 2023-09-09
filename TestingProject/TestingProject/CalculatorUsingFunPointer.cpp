//#include<iostream>
//#include<functional>
//
//int getIntegers()
//{
//	std::cout << "Enter an integer: ";
//	int input{};
//	std::cin >> input;
//
//	return input;
//}
//
//char getOperation()
//{
//	char op{};
//
//	do
//	{
//		std::cout << "Enter an operation ('+', '-', '*', '/'): ";
//		std::cin >> op;
//
//	} while (op != '+' && op != '-' && op != '*' && op != '/');
//
//	return op;
//}
//
//int add(int x, int y)
//{
//	return x + y;
//}
//
//int subtract(int x, int y)
//{
//	return x - y;
//}
//
//int multiply(int x, int y)
//{
//	return x * y;
//}
//
//int divide(int x, int y)
//{
//	return x / y;
//}
//
//using ArithmeticFunction = std::function<int (int, int)>;
//
//ArithmeticFunction getArithmeticFunction(char op)
//{
//	switch (op)
//	{
//		case '+':
//			return &add;
//		case '-':
//			return &subtract;
//		case '*':
//			return &multiply;
//		case '/':
//			return &divide;
//	}
//	
//	return nullptr;
//
//}
//int main()
//{
//	int x{ getIntegers() };
//	char operation{ getOperation() };
//	int y{ getIntegers() };
//	ArithmeticFunction func{ getArithmeticFunction(operation) };
//	std::cout << func(x, y);
//
//	return 0;
//}