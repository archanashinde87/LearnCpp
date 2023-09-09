//#include<iostream>
//
//struct Employee
//{
//	int id{};
//	int age{};
//	double wage{};
//};
//
//int main()
//{
//	Employee joe;
//	joe.id = 1;
//	joe.age = 35;
//	joe.wage = 60000.0;
//
//	Employee frank;
//	frank.id = 2;
//	frank.age = 30;
//	frank.wage = 55000.0;
//
//	int totalAge{ joe.age + frank.age };
//
//	if (joe.wage > frank.wage)
//		std::cout << "Joe makes more than Frank\n";
//	else if (joe.wage < frank.wage)
//		std::cout << "Joe makes less than Frank\n";
//	else
//		std::cout << "Joe and Frank make the same amount\n";
//
//	// Frank got a promotion
//	frank.wage += 5000.0;
//
//	// Today is Joe's birthday
//	++joe.age; // use pre-increment to increment Joe's age by 1
//
//	return 0;
//
//}