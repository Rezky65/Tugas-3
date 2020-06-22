#include <iostream>
 
int main()
{
    int a = 1;
    int &b = a;
 
    std::cout<<a<<"\n";
    b = 2;
    std::cout<<a;
 
    return 0;
}
