#include <iostream>

double* create_array(int size1)
{
    return new double[size1]{};
}

int main()
{
    int size{};
    std::cout<<"Vvedite razmer massiva: ";
    std::cin>>size;
    double* spisok(create_array(size)); 
    for (int i{0}; i<size;i++)
    {
        std::cout<<spisok[i]<< " ";
    }
    delete []spisok;
}