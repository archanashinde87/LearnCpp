//#include<functional>
//#include<iostream>
//
//int main()
//{
//	double (*addNumbers1)(double, double) { [](double x, double y) {return (x + y); } };
//	std::cout << addNumbers1(5.0, 6.0) << '\n';
//
//	std::function addNumbers2{ [](double x, double y) {return (x + y); } };
//	std::cout << addNumbers2(4.0, 5.0) << '\n';
//
//	//This is more readable form of lambda function
//	auto addNumbers3{ [](double x, double y) {return (x+y); } };
//	std::cout << addNumbers3(2.0,1.0) << '\n';
//
//	return 0;
//}