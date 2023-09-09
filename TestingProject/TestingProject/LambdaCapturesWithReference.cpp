//#include<iostream>
//#include<algorithm>
//#include<array>
//#include<string_view>
//
//struct Car
//{
//	std::string make{};
//	std::string model{};
//};
//
//int main()
//{
//	std::array<Car, 3> cars{ { { "Volkswagen", "Golf" },
//							 { "Toyota", "Corolla" },
//							 { "Honda", "Civic" } } };
//
//	int comparisons{ 0 };
//
//	std::sort(cars.begin(), cars.end(), 
//		[&comparisons](const auto& a, const auto& b) 
//		{++comparisons;
//		return(a.make < b.make); });
//
//	std::cout << "Comparisons: " << comparisons << '\n';
//
//	for (const auto& car : cars)
//	{
//		std::cout << car.make << ' ' << car.model << '\n';
//	}
//
//	return 0;
//
//}
//
