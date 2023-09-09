//#include<iostream>
//
//int main()
//{
//	constexpr int fibonacci[]{ 0,1,1,2,3,5,8,13,21,34 };
//	for(int i : fibonacci)
//	{
//		std::cout << i << ' ';
//	}
//
//	std::cout << '\n';
//
//	constexpr int scores[]{ 89,34,78,93,55 };
//	int maxScore{};
//	for (int score : scores)
//	{
//		if (score > maxScore)
//			maxScore = score;
//	}
//	std::cout << maxScore << '\n';
//
//	std::string names[]{ "Archana", "Deva", "Aadya", "Yugan" };
//	for (const auto& name : names)
//		std::cout << name << ' ';
//
//	std::cout << '\n';
//
//	return 0;
//}