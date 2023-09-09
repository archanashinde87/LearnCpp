//#include<iostream>
//int main()
//{
//	int outer{ 1 };
//	while (outer<=5)
//	{
//		int inner{ 1 };
//		while (inner <= outer)
//		{
//			std::cout << inner << ' ';
//			++inner;
//		}
//		std::cout << '\n';
//		++outer;
//	}
//	std::cout << '\n';
//
//	//char mychar{ 'a' };
//	//while (mychar <= 'z')
//	//{
//	//	std::cout << mychar << ' ' << static_cast<int>(mychar) << '\n';
//	//	++mychar;
//	//}
//
//	int outer1{ 5 };
//	while (outer1 >=1)
//	{
//		int inner1{ outer1 };
//		while (inner1 >= 1)
//		{
//			std::cout << inner1 << ' ';
//			--inner1;
//		}
//		std::cout << '\n';
//		--outer1;
//	}
//	std::cout << '\n';
//
//	int outer2{1};
//	while (outer2<=5)
//	{
//		int inner2{ 5 };
//		while (inner2 >= 1)
//		{
//			if (inner2 <= outer2)
//				std::cout << inner2 << ' '; // print the number and a single space
//			else
//				std::cout << "  ";			
//			
//			--inner2;
//		}
//		std::cout << '\n';
//		++outer2;
//
//	}
//	return 0;
//}