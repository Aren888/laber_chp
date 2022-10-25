#include <iostream>

int main()
{
    int a[100], count, i, sum = 0, allSum = 0;
    std::cout << "Enter number count: ";
    std::cin >> count;
    for (i = 0; i < count; i++) {
        std::cin >> a[i];
        sum += a[i];
    }
    
    for(i = 1; i <= count+1; i++){
        allSum += i;
    }
    
    std::cout<<"Missing number is " <<allSum - sum<<std::endl;
}
