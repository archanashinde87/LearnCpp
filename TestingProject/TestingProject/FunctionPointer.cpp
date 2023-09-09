//#include <iostream>
//
//int goo(int x)
//{
//    return x;
//}
//int foo() 
//{
//    return 5;
//}
//
//int main()
//{
//    std::cout << foo() << '\n'; // we meant to call foo(), but instead we're printing foo itself!
//
//    int (*funcptr)(int) { &goo };
//
//    std::cout << (*funcptr)(6) << '\n';
//    std::cout << funcptr(7) << '\n';
//
//
//    return 0;
//}