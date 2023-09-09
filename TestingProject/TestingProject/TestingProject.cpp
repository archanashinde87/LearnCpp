#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<string>
#include<algorithm>
#include<numeric>
//using namespace std;

//int main()
//{
	////std::vector
	//vector<int> vect;
	//for (int i{ 0 }; i < 6; ++i)
	//{
	//	vect.push_back(10 - i);
	//}
	//for (int i{ 0 }; i < vect.size(); ++i)
	//{
	//	cout << vect[i] << ' ';
	//}
	//cout << '\n';

	////std::deque
	//deque<int> deq;
	//for (int count{ 0 }; count < 3; ++count)
	//{
	//	deq.push_back(count);
	//	deq.push_front(10 - count);
	//}
	//for (int count{ 0 }; count < deq.size(); ++count)
	//{
	//	cout << deq[count] << " ";
	//}
	//cout << '\n';

	//// const iterator
	//vector<int> vect1;
	//for (int count{ 0 }; count < 6; ++count)
	//{
	//	vect1.push_back(count);
	//}

	//vector<int>::const_iterator it;
	//it = vect1.cbegin();
	//while (it != vect1.cend())
	//{
	//	cout << *it << " ";
	//	++it;
	//}
	//cout << '\n';

	//// const iterator for std::list
	//list<int> li;
	//for (int count{ 0 }; count < 6; ++count)
	//{
	//	li.push_back(count);
	//}

	//list<int>::const_iterator it1;
	//it1 = li.cbegin();
	//while (it1 != li.cend())
	//{
	//	cout << *it1 << ' ';
	//	++it1;
	//}
	//cout << '\n';

	////set iterator
	//set<int> myset;
	//myset.insert(5);
	//myset.insert(-7);
	//myset.insert(8);
	//myset.insert(1);
	//myset.insert(-5);
	//myset.insert(0);

	//set<int>::const_iterator it2;
	//it2 = myset.cbegin();
	//while (it2 != myset.cend())
	//{
	//	cout << *it2 << ' ';
	//	++it2;
	//}
	//cout << '\n';

	//// map iterator
	//map<int, std::string>mymap;
	//mymap.insert(make_pair(8, "Apple"));
	//mymap.insert(make_pair(5, "Banana"));
	//mymap.insert(make_pair(1, "Peach"));
	//mymap.insert(make_pair(4, "Grape"));
	//mymap.insert(make_pair(6, "Lichhi"));
	//mymap.insert(make_pair(2, "Orange"));

	//auto it3{ mymap.cbegin() };
	//while (it3 != mymap.cend())
	//{
	//	cout << it3->first << "=" << it3->second << ' ';
	//	++it3;
	//}
	//cout << '\n';

	/*std::list<int> li(6);
	std::iota(li.begin(), li.end(), 10);

	std::cout << *std::min_element(li.begin(), li.end()) << " "
		<< *std::max_element(li.begin(), li.end()) << '\n';*/

	/*std::list<int> li(6);
	std::iota(li.begin(), li.end(), 0);

	auto it{ std::find(li.begin(), li.end(), 3) };
	li.insert(it, 8);
	for (auto i : li)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';*/

	/*std::vector<int> vect1{ 3, -8, 5, 0, -4, 1, 9 };
	std::sort(vect1.begin(), vect1.end());
	for (auto i : vect1)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';
	std::reverse(vect1.begin(), vect1.end());
	for (auto i : vect1)
	{
		std::cout << i << ' ';
	}
	std::cout << '\n';*/

	/*std::string sSource;
	std::cout << sSource;

	return 0;*/
//}