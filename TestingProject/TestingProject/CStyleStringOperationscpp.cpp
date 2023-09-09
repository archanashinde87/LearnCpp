//#include<cstring>
//#include<iostream>
//#include<iterator>
//
//int main()
//{
//	char source[]{ "Archana Shinde!!" };
//	char dest[50];
//	strcpy(dest, source);
//	std::cout << dest << '\n';
//
//	char buffer[255]{};
//	std::cout << "Enter a string : ";
//	std::cin.getline(buffer, std::size(buffer));
//
//	int bufferlength{ static_cast<int>(strlen(buffer)) };
//	int nSpacesFound{ 0 };
//	for (int index{ 0 }; index < bufferlength; ++index)
//	{
//		if (buffer[index] == ' ')
//			++nSpacesFound;
//	}
//
//	std::cout << "You typed " << nSpacesFound << " spaces!\n";
//
//	return 0;
//}