//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//
//struct Student
//{
//	std::string name{};
//	int grade{};
//};
//
//int getNumberOfStudents()
//{
//	std::cout << "Enter the number of students: ";
//	int nStudents{};
//	std::cin >> nStudents;
//
//	return nStudents;
//}
//
//std::vector<Student> getStudents()
//{
//	using Students = std::vector<Student>;
//	int numberOfStudents{ getNumberOfStudents() };
//	Students students(static_cast<Students::size_type>(numberOfStudents));
//
//	int studentNumber{ 1 };
//	for (auto& student : students)
//	{
//		std::cout << "Enter name #" << studentNumber << ": ";
//		std::cin >> student.name;
//		std::cout << "Enter grade #" << studentNumber << ": ";
//		std::cin >> student.grade;
//
//		++studentNumber;
//	}
//
//	return students;
//
//}
//
//// Pass by reference to avoid slow copies.
//bool compareStudents(const Student& a, const Student& b)
//{
//	return (a.grade > b.grade);
//}
//
//int main()
//{
//	auto students{ getStudents() };
//
//	std::sort(students.begin(), students.end(), compareStudents);
//
//	// Print out all the names
//	for (const auto& student : students)
//	{
//		std::cout << student.name << " got a grade of " << student.grade << '\n';
//	}
//
//
//
//	return 0;
//}