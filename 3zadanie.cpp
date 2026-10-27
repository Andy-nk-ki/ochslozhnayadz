#include <iostream>

int** create_two_dim_array(int strock1, int stolb1)
{
    int** massiv1(new int*[strock1]);
    for (int b{0};b<strock1;b++)
    {
       massiv1[b]=new int[stolb1]{};
    }
    return massiv1;
}

void fill_two_dim_array(int** massiv1,int strok1,int stolb1)
{
    for (int i{0};i< strok1;i++)
    {
        for (int n{0};n<stolb1;n++)
        {
            massiv1[i][n]=(i+1)*(n+1);
        }
    }
}

void print_two_dim_array(int** massiv1,int strock1,int stolb1)
{
    for (int i{0};i<strock1;i++)
    {
        for (int n{0};n<stolb1;n++)
        {
            std::cout<< massiv1[i][n]<< "\t";
        }
        std::cout<<" "<< std::endl;
    }
}

void delete_two_dim_array(int** massiv1,int strock1,int stolb1)
{
    for (int i{0};i<strock1;i++)
    {
        delete[] massiv1[i];
    }
    delete[] massiv1;
    
}

int main()
{
    int strok{0};
    int stolb{0};
    std::cout<<"Vvedi kolichestvo strok: " ;
    std::cin>> strok;
    std::cout<<" "<< std::endl;
    std::cout<<"Vvedo kolichestvo stolbcov: ";
    std::cin>>stolb;
    std::cout<< " " << std::endl;
    int** massiv(create_two_dim_array(strok,stolb));
    fill_two_dim_array(massiv,strok,stolb);
    print_two_dim_array(massiv,strok,stolb);
    delete_two_dim_array(massiv,strok,stolb);
}