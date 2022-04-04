#include <iostream>
template <typename x>
x sign (x number)
{
    if (number>0)
        return 1;
    else if (number==0)
        return 0;
    else
        return -1;
}
int main()
{
    int a = 10;
    long int b = -10;
    std::cout<<sign(a)<<std::endl<<sign(b)<<std::endl;
    return 0;
}
