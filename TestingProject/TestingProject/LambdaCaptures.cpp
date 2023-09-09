//#include<iostream>
//#include<string_view>
//#include<algorithm>
//#include<array>
//
//int main()
//{
//	constexpr std::array<std::string_view, 4> arr{ "apple","walnut", "banana", "berry" };
//	std::cout << "Search For: ";
//	std::string search{};
//	std::cin >> search;
//
//	auto found{ std::find_if(arr.begin(), arr.end(), [search](std::string_view str) {return (str.find(search) != std::string_view::npos); }) };
//
//	if (found == arr.end())
//		std::cout << "Not Found.\n";
//	else
//		std::cout << "Found " << *found;
//
//	return 0;
//
//}