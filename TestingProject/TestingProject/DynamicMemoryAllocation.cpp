//#include<iostream>
//#include<iterator>
//#include<string>
//#include<algorithm>
//#include<cstddef>
//
//void getNames(std::string* array, size_t length)
//{
//	for (int i{ 0 }; i < length; ++i)
//	{
//		std::cout << "Enter name #" << i + 1 << ": ";
//		std::getline(std::cin >> std::ws, array[i]);
//	}
//}
//void printSortedNames(std::string* array, size_t length)
//{
//	std::cout << "Here is your sorted list: " << '\n';
//	for (int i{ 0 }; i < length; ++i)
//		std::cout << "Name #" << i + 1 << ": " << array[i] << '\n';
//
//}
//int main()
//{
//	std::size_t numNames{};
//	std::cout << "How many names would you like to enter ?";
//	std::cin >> numNames;
//
//	std::string* names{ new std::string[numNames]{} };
//
//	getNames(names, numNames);
//
//	std::sort(names, names + numNames);
//	printSortedNames(names, numNames);
//
//	delete[] names;
//
//	return 0;
//}