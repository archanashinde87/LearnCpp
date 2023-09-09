//#include<iostream>
//
//namespace MonsterType
//{
//	enum MonsterType
//	{
//		orcs,
//		goblins,
//		trolls,
//		ogres,
//		skeletons,
//	};
//}
//enum Color 
//{
//	red,
//	green,
//	blue,
//};
//enum class Animal
//{
//	pig, 
//	chicken, 
//	goat, 
//	cat, 
//	dog, 
//	duck
//};
//constexpr std::string_view getAnimalName(Animal animal)
//{
//	switch (animal)
//	{
//	case Animal::pig:
//			return "pig";
//	case Animal::chicken:
//			return "chicken";
//	case Animal::goat:
//			return "goat";
//	case Animal::cat:
//			return "cat";
//	case Animal::dog:
//			return "dog";
//	case Animal::duck:
//		return "duck";
//	default:
//		return "Unknown";
//
//	}
//}
//void printNumberOfLegs(Animal animal)
//{
//	std::cout << "A " << getAnimalName(animal) << " has ";
//	switch (animal)
//	{
//		case Animal::chicken:
//		case Animal::duck:
//			std::cout << 2;
//			break;
//		case Animal::pig:
//		case Animal::goat:
//		case Animal::cat:
//		case Animal::dog:
//			std::cout << 4;
//			break;
//		default:
//			std::cout << "???";
//			break;
//	}
//	std::cout << " legs.\n";
//}
//std::ostream& operator<<(std::ostream& out, Color color)
//{
//	switch (color)
//	{
//	case red:
//		return out << "red";
//	case green:
//		return out << "green";
//	case blue:
//		return out << "blue";
//	default:
//		return out << "?";
//	}
//}
//int main()
//{
//	MonsterType::MonsterType troll{ MonsterType::trolls };
//	Color shirt{ blue };
//	std::cout << "Your shirt is " << shirt << '\n';
//	Animal pet{ Animal::chicken };
//	printNumberOfLegs(pet);
//	return 0;
//}