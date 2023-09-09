//#include<iostream>
//
//class Value
//{
//private:
//	int m_value{};
//public:
//	Value(int value) :m_value{ value }
//	{}
//
//	friend bool isEqual(const Value& a, const Value& b);
//};
//
//bool isEqual(const Value& a, const Value& b)
//{
//	return (a.m_value == b.m_value);
//}
//
//int main()
//{
//	Value v1{ 5 };
//	Value v2{ 6 };
//
//	std::cout << std::boolalpha << isEqual(v1, v2) << '\n';
//
//	return 0;
//
//}