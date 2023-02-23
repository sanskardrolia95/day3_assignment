#include<iostream>
int main()
{
    int num1,num2,res;
    std::cout<<"Enter 1st number : "<<std::endl;
    std::cin>>num1;
    std::cout<<"Enter 2nd number : "<<std::endl;
    std::cin>>num2;
    if(num1>num2)
    {
        std::cout<<num1<<" is greater than "<<num2;
    }
    else {
        std::cout<<num2<<" is greater than "<<num1;
    }
return 0;
}