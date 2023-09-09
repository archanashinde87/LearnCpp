//#include<iostream>
//
//class Something
//{
//	int m_value1{};
//	double m_value2{};
//	char m_value3{};
//
//public:
//
//	Something() : m_value1{ 1 }, m_value2{ 2.2 }, m_value3{ 'c' } // Initialize our member variables
//	{
//	 //No need for assignment here
//	}
//
//	Something(int value1, double value2, char value3 = 'd')
//		: m_value1{ value1 }, m_value2{ value2 }, m_value3{ value3 }  // Initialize our member variables
//	{
//		//No need for assignment here
//	}
//	void print()
//	{
//		std::cout << "Something (" << m_value1 << ", " << m_value2 << ", " << m_value3 << ")\n";
//	}
//};
//
//class ConstMember
//{
//	const int m_x;
//
//public:
//
//	ConstMember(int x) :m_x{ x }
//	{
//	
//	}
//
//	void print()
//	{
//		std::cout << "ConstMember(" << m_x << ")\n";
//	}
//};
//
//int main()
//{
//	Something something1{};
//	something1.print();
//
//	Something something2{ 3,5.5 };
//	something2.print();
//
//	std::cout << "Enter an integer: ";
//	int x{};
//	std::cin >> x;
//	
//	ConstMember constMem{ x };
//	constMem.print();
//
//	return 0;
//
//}