//#include<iostream>
//
//template<typename T>
//struct Pair
//{
//	T first{};
//	T second{};
//};
//
//template<typename T>
//constexpr T max(Pair<T> p)
//{
//	return (p.first < p.second ? p.second : p.first);
//}
//
//template<typename T, typename U>
//struct Pair2
//{
//	T first{};
//	U second{};
//};
//
//template<typename T, typename U>
//void print(Pair2<T, U>p)
//{
//	std::cout << '[' << p.first << ", " << p.second << ']' << '\n';
//}
//template<typename T, typename U>
//Pair2(T, U) -> Pair2<T, U>;
//
//template<typename T>
//Pair(T, T) -> Pair<T>;
//int main()
//{
//	Pair<int> p1{ 1,2 };
//	std::cout << max(p1) << " is larger.\n";
//
//	Pair p2{ 2.3, 3.4 };
//	std::cout << max(p2) << " is larger.\n";
//
//	Pair2<int, double> p3{ 1, 2.3 };
//	Pair2<double, int> p4{ 4.5, 3 };
//	Pair2 p5{ 4,8 };
//
//	print(p3);
//	print(p4);
//	print(p5);
//
//	return 0;
//}