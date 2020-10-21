#include<iostream>  
  
using namespace std;

double avgFourInts(int a, int b, int c, int d)
{
    double toReturn = a + b + c + d;
    return toReturn/4;
}

int minOfArray(int a[], int size)
{
    int min = a[0];
    for(int i = 0; i<size; i++)
    {
       if(a[i]<min)
       {
          min = a[i];
       }
    }
    return min;
}

int main() 
{
    std::cout<< "Hello World!" <<std::endl; 
    int i = 5;
    long year = 2020;
    double oneHalf = 0.5;
    float val = 200;

    std::cout<< i << "\n";
    std::cout<< year<< "\n";
    std::cout<< oneHalf << "\n";
    std::cout<< val << "\n";

    cout<< "size of i (int): " << sizeof(i) << "\n";
    cout<< "size of year (long): " << sizeof(year) << "\n";
    cout<< "size of onehalf (double): " << sizeof(oneHalf) << "\n";
    cout<< "size of val (float): " << sizeof(val) << "\n";

    for(int i = 0; i<=100; i++)
    {
        if(i%3 == 0 && i % 5 == 0)
        {
            cout <<"fizzbuzz\n";
        }
        else if(i%3 == 0)
        {
            cout << "fizz\n";
        }
        else if(i%5 == 0)
        {
            cout << "buzz\n";
        }
        else 
        {
            cout << i << "\n";
        }
    }
    
    cout << "average of 1, 2, 3, and 4 " << avgFourInts(1,2,3,4) << "\n";

    int size = 4;
    int a[size];
    a[0] = 4;
    a[1] = 43;
    a[2] = 1;
    a[3] = -3;

    cout << "a: " << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << "\n";    
    cout << "min of array a " << minOfArray(a, size) << "\n";

    return 0; 
} 
