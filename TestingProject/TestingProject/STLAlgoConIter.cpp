//#include<iostream>
//#include<array>
//#include<numeric>
//
//enum ItemTypes
//{
//	health_potions,
//	torches,
//	arrows,
//	max_items
//};
//
//using Inventory = std::array<int, ItemTypes::max_items>;
//
//int countTotalItems(const Inventory& items)
//{
//	return std::reduce(items.begin(), items.end());
//}
//
//int main()
//{
//	Inventory items{ 2,5,10 };
//	std::cout << "The player has " << countTotalItems(items) << " item(s) in total.\n";
//	std::cout << "The player has " << items[ItemTypes::torches] << " torch(es)\n";
//
//	return 0;
//
//}