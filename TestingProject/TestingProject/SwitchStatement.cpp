//#include<iostream>
////void PrintDigitName(int x)
////{
////	switch(x)
////	{
////		case 1:
////			std::cout << "One\n";
////			return;
////		case 2:
////			std::cout << "Two\n";
////			return;
////		case 3:
////			std::cout << "Three\n";
////			return;
////		defalut:
////			std::cout << "Unknown\n";
////			return;
////	}
////}
////
////void PrintDigit2(int x)
////{
////	switch (x)
////	{
////		case 4:
////			std::cout << "Four\n";
////			break;
////		case 5:
////			std::cout << "Five\n";
////			break;
////		case 6:
////			std::cout << "Five\n";
////			break;
////		default :
////			std::cout << "Unknown Number\n";
////			break;
////	}
////	std::cout << "Hooray, Ah,ah, ah...\n";
////}
////
////int main()
////{
////	PrintDigitName(2);
////	PrintDigit2(5);
////	return 0;
////}
//
//void calculate1(int x, int y, char operation)
//{
//	switch (operation)
//	{
//		case '+':
//			std::cout << x << " + " << y << " = " << x + y << '\n';
//			return;
//		case '-':
//			std::cout << x << " - " << y << " = " << x - y << '\n';
//			return;
//		case '*':
//			std::cout << x << " * " << y << " = " << x * y << '\n';
//			return;
//		case '/':
//			std::cout << x << " / " << y << " = " << x / y << '\n';
//			return;
//		case '%':
//			std::cout << x << " % " << y << " = " << x % y << '\n';
//			return;
//		default:
//			std::cout << "calculate() Unknown operation.\n";
//
//	}
//
//}
//int main()
//{
//	std::cout << "Enter an integer: ";
//	int x{};
//	std::cin >> x;
//	std::cout << "Enter an another integer: ";
//	int y{};
//	std::cin >> y;
//	std::cout << "Enter a mathematical operator (+, -, *, /, or %): ";
//	char ch{};
//	std::cin >> ch;
//	calculate1(x,y,ch);
//	return 0;
//}