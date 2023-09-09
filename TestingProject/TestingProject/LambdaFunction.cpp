//#include<algorithm>
//#include<iostream>
//#include<array>
//#include<string_view>
//
//int main()
//{
//	constexpr std::array<std::string_view, 4> arr{"apple", "walnut", "banana", "berry"};
//
//	const auto found{ std::find_if(arr.begin(), arr.end(),
//		[](std::string_view str)
//		{
//			return (str.find("nut") != std::string_view::npos);
//		}
//		) };
//
//	if (found==arr.end())
//	{
//		std::cout << "Not found.\n";
//	}
//	else
//	{
//		std::cout << "Found " << *found << '\n';
//	}
//	return 0;
//}