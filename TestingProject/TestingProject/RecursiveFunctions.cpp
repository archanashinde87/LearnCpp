//#include <iostream>
//#include <vector>
//
////fibonacci sequence function
//int fibonacci(int count)
//{
//	static std::vector results{ 0, 1 };
//
//	if (count < static_cast<int>(std::size(results)))
//		return results[count];
//
//	results.push_back(fibonacci(count - 1) + fibonacci(count - 2));
//	return results[count];
//}
//
//// Factorial function
//int factorial(int n)
//{
//	if (n <= 0)
//		return 1;
//
//	return factorial(n - 1) * n;
//}
//
////sum of digits in given number
//int sumDigits(int x)
//{
//	if (x < 10)
//		return x;
//
//	return sumDigits(x / 10) + x % 10;
//}
//
//int main()
//{
//	// display the first 13 Fibonacci numbers
//	std::cout << "Fibonacci sequence of numbers: " << '\n';
//
//	for (int count{ 0 }; count < 13; ++count)
//		std::cout << fibonacci(count) << ' ';
//	std::cout << "\n\n";
//
//	std::cout << "Factorial of numbers: " << '\n';
//
//	for (int count{ 0 }; count < 7; ++count)
//		std::cout << factorial(count) << '\n';
//	std::cout << '\n';
//
//	std::cout << "Sum of digits in a given number: " << '\n';
//	std::cout << sumDigits(93427);
//	std::cout << '\n';
//
//
//	return 0;
//}