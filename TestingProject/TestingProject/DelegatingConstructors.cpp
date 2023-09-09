//#include<iostream>
//#include<string>
//class Employee
//{
//	int m_id{};
//	std::string m_name{};
//
//public:
//
//	Employee(int id, std::string_view name) : m_id{ id }, m_name{ name }
//	{
//		std::cout << "Employee " << m_name << " created.\n";
//	}
//
//	// Use a delegating constructor to minimize redudant code
//	Employee(std::string_view name) : Employee{ 0, name }
//	{
//	
//	}
//};
//
//int main()
//{
//	Employee e1{2, "Alex"};
//	Employee e2{ "Archana" };
//
//	return 0;
//}