//#include<iostream>
//#include<array>
//#include<cassert>
//
//class Stack
//{
//	using Array = std::array<int, 10>;
//	using Index = Array::size_type;
//
//	Array m_array{};
//	Index m_stackSize{0};
//
//public:
//	void reset()
//	{
//		m_stackSize = 0;
//	}
//	bool push(int value)
//	{
//		if (m_stackSize == m_array.size())
//			return false;
//
//		m_array[++m_stackSize]=value;
//		return true;
//	}
//	int pop()
//	{
//		assert(m_stackSize > 0 && "Can not pop empty stack");
//		return m_array[--m_stackSize];
//	}
//	void print()
//	{
//		std::cout << "( ";
//		for (Index i{ 0 }; i < m_stackSize; ++i)
//			std::cout << m_array[i] << ' ';
//		std::cout << ")\n";
//
//	}
//
//};
//int main()
//{
//	Stack stack;
//	stack.print();
//
//	stack.push(5);
//	stack.push(3);
//	stack.push(8);
//	stack.print();
//
//	stack.pop();
//	stack.print();
//
//	stack.pop();
//	stack.pop();
//
//	stack.print();
//
//	return 0;
//}
