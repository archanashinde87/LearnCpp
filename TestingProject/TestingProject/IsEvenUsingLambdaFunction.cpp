//#include<iostream>
//#include<algorithm>
//#include<array>
//
//int main()
//{
//	auto isEven{ [](int x) {return (x % 2 == 0); } };
//
//	std::array arr{ 2,4,6,8,10 };
//
//	bool allEven{ std::all_of(arr.begin(), arr.end(), isEven) };
//
//	if (allEven)
//		std::cout << "All the elements in the given array are even.\n";
//	else
//		std::cout << "A few or all the elements in the given array aren't even.\n";
//
//	return 0;
//
//}