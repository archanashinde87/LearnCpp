//#include<iostream>
//
//class Humidity;
//class Temperature
//{
//	int m_temp{};
//
//public:
//	Temperature(int temp=0) : m_temp{ temp }
//	{
//	}
//
//	friend void printWeather(const Temperature& temp, const Humidity& humidity);
//};
//
//class Humidity
//{
//	int m_humidity{};
//public:
//	Humidity(int humidity=0) : m_humidity{ humidity }
//	{
//	}
//
//	friend void printWeather(const Temperature& temp, const Humidity& humidity);
//
//};
//
//void printWeather(const Temperature& temperature, const Humidity& humidity)
//{
//	std::cout << "The temperature is " << temperature.m_temp <<
//		" and the humidity is " << humidity.m_humidity << '\n';
//}
//
//int main()
//{
//	Temperature temp1{10};
//	Humidity humidity1{12};
//
//	printWeather(temp1, humidity1);
//
//	return 0;
//
//}
//
