#include <iostream>

int find_method(int);

int main()
{
    int stage;
    std::cout << "Enter the number of the stage: " << std::endl;
    std::cin >> stage;
    std::cout << find_method(stage);
}
//a(n) = a(n-1) + a(n-2) + a(n-3)
int find_method(int n)
{
    int result = 1;
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (n == 2)
    {
        return 2;
    }
    else if (n == 3)
    {
        return 4;
    }
    else
    {
        for (int i = 1; i < n; i++)
        {
            result = (i-1)+(i-2)+(i-3);
        }
        return result;
    }
    
}
