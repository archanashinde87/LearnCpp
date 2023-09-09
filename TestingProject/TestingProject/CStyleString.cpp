//#include<iostream>
//#include<iterator>
//
//int main()
//{
//	char myString[]{ "string" };
//	int length{ static_cast<int>(std::size(myString)) };
//	std::cout << "string has " << length << " characters.\n";
//
//	for (int i{ 0 }; i < length; ++i)
//		std::cout << static_cast<int>(myString[i]) << ' ';
//
//	std::cout << '\n';
//
//	std::cout << myString << '\n';
//	myString[1] = 'p';
//	std::cout << myString << '\n';
//
//	char name[20]{ "Alex" }; // only use 5 characters (4 letters + null terminator)
//	std::cout << "My name is: " << name << '\n';
//
//	int length1{ static_cast<int>(std::size(name)) };
//
//	for (int i{ 0 }; i < length1; ++i)
//		std::cout << static_cast<int>(name[i]) << ' ';
//
//	std::cout << '\n';
//
//	char myName[256]{};
//	std::cout << "Enter your name: ";
//	std::cin.getline(myName, std::size(myName));
//	std::cout << "You entered " << myName << '\n';
//
//	return 0;
//}