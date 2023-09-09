//#include <iostream>
//#include "constants.h"
//
//int main()
//{
//	std::cout << "How many students are in your class? ";
//	int students{};
//	std::cin >> students;
//
//
//	if (students > constants::max_class_size)
//		std::cout << "There are too many students in this class";
//	else
//		std::cout << "This class isn't too large";
//
//	return 0;
//}

//#include <iostream>
//
//int main()
//{
//	constexpr double gravity{ 9.8 };
//
//	if constexpr (gravity == 9.8) // now using constexpr if
//		std::cout << "Gravity is normal.\n";
//	else
//		std::cout << "We are not on Earth.\n";
//
//	return 0;
//}
