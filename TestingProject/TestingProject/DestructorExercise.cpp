//#include<iostream>
//#include<cassert>
//#include<cstddef>
//
//class IntArray
//{
//	int* m_array{};
//	int m_length{};
//
//public:
//	IntArray(int length)
//	{
//		assert(length > 0);
//		m_array = new int[static_cast<std::size_t>(length)];
//		m_length = length;
//	}
//
//	~IntArray()
//	{
//		delete[] m_array;
//	}
//
//	void setValue(int index, int value)
//	{
//		m_array[index] = value;
//	}
//	int getValue(int index)
//	{
//		return m_array[index];
//	}
//	int	getLength()
//	{
//		return m_length;
//	}
//
//};
//
//int main()
//{
//	IntArray array(10); // allocate 10 integers
//	for (int count{ 0 }; count < array.getLength(); ++count)
//		array.setValue(count, count + 1);
//
//	std::cout << "The value of element 5 is: " << array.getValue(5) << '\n';
//
//	return 0;
//} // array is destroyed here, so the ~IntArray() destructor function is called here
