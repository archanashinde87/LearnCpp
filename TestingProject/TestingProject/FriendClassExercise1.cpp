#include<iostream>

class Storage
{
	int m_nValue{};
	double m_dValue{};

public:
	Storage(int nValue, double dValue) : m_nValue{ nValue }, m_dValue{ dValue }
	{}

	friend class Display;
};

class Display
{
	bool m_displayIntfirst{};

public:
	Display(bool displayIntfirst) : m_displayIntfirst{ displayIntfirst }
	{
	}

	void DisplayItem(const Storage& storage)
	{
		if (m_displayIntfirst)
			std::cout << storage.m_nValue << ' ' << storage.m_dValue;
		else
			std::cout << storage.m_dValue << ' ' << storage.m_nValue;
	}

};

int main()
{
	Storage storage{ 10, 6.7 };
	Display displayItem{ false };

	displayItem.DisplayItem(storage);

	return 0;
}