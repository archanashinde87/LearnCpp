//#include<iostream>
//#include<string_view>
//
//int main()
//{
//	constexpr std::string_view names[]{ "Archana", "Aadya", "Shankar", "Yugan", "Alex" };
//	constexpr int scores[]{ 84, 67, 96, 88, 98 };
//	int maxScore{ 0 };
//	for (int i{ 0 }; auto score : scores)
//	{
//		if (score > maxScore)
//		{
//			std::cout << names[i] << " beat the previous best score of " << maxScore << " by " << (score - maxScore) << " points\n";
//			maxScore = score;
//		}
//		++i;
//	}
//
//	std::cout << "The best score was " << maxScore << '\n';
//
//	constexpr std::string_view students[]{ "Alex", "Betty", "Caroline", "Dave", "Emily", "Fred", "Greg", "Holly" };
//	std::cout << "Enter a name : ";
//	std::string name{};
//	std::cin >> name;
//
//	bool nameFound{ false };
//	for (auto student : students)
//	{
//		if (name == student)
//			nameFound = true;
//	}
//
//	if(nameFound)
//		std::cout << name << " was found.\n";
//	else
//		std::cout << name << " was not found.\n";
//
//
//	return 0;
//}