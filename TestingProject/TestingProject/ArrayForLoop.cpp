//#include <iostream>
//#include<iterator>
//#include<limits>
//
//int main()
//{
//	int number{};
//	do
//	{
//		std::cout << "Enter number between 1 and 9: ";
//		std::cin >> number;
//
//		if (std::cin.fail())
//			std::cin.clear();
//		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
//
//	} while (number < 1 || number > 9);
//
//	constexpr int array[]{ 4, 6, 7, 3, 8, 2, 1, 9, 5 };
//	int arraySize{ static_cast<int>(std::size(array)) };
//	for (int i{ 0 }; i < arraySize; ++i)
//	{
//		std::cout << array[i] << ' ';
//	}
//	std::cout << '\n';
//
//	for (int index{ 0 }; index < arraySize; ++index)
//	{
//		if (array[index] == number)
//		{
//			std::cout << "The number " << number << " has index " << index << '\n';
//			break; 
//		}
//	}
//	return 0;
//}
