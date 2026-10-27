#include <iostream>

int* addspisok(int size1)
{
    return new int[size1]{};
}

void zapoln(int* spisok1,int size1)
{
    for (int i{0};i<size1;i++)
    {
        int element{0};
        std::cout<<"arr[" <<i<<"]"<<" = ";
        std::cin>> element;
        spisok1[i]=element;
        std::cout<< " " <<std::endl;
    }
}

void vivod(int* spisok1, int size1)
{
    std::cout<<"Vivedennii massiv: ";
    for (int i{0};i< size1;i++)
    {
        std::cout<< spisok1[i] << " ";
    }

}

int main()
{
    int size{};
    std::cout<< "Vvedi razmer massiva: " ;
    std::cin >> size;
    int* spisok(addspisok(size));
    zapoln(spisok,size);
    vivod(spisok,size);
}