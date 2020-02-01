#include<iostream>  
  
using namespace std;
int findMin(int a[]){
    int min = a[0];
    cout<<(int)sizeof(a)<<endl;
    for(int i = 1; i < (int)sizeof(a)/(int)sizeof(a[0]); i++){
        min = a[i] < min? a[i]: min;
        cout<<min<<endl;
    }
    return min;
}

int main() 
{
    int one = 1;
    int two = 2;
    int three = 3;
    int none;

    cout<< one <<endl;
    std::cout<< two <<std::endl;
    std::cout<< three <<std::endl;
    std::cout<< none <<std::endl;

    std::cout<< sizeof(one) <<std::endl;
    std::cout<< sizeof(two) <<std::endl;
    std::cout<< sizeof(three) <<std::endl;
    std::cout<< sizeof(none) <<std::endl;

    std::cout<< "Hello World!" <<std::endl; 
      
    // Fizzbuzz
    for(int i = 0; i < 101; i++){
        if(i % 3 == 0){
            cout<< "Fizz";
        } else if(i % 5 == 0){
            cout<< "Buzz";
        } else if(i % 15 == 0){
            cout<< "FizzBuzz";
        } else {
            cout<< i;
        }
        cout<<endl;
    }

    int i = 0;
    while(i < 101){
        cout<< i++ <<endl;
    }

    int a[] = {6,5,4,7,5,3,6};
    cout<<(int)sizeof(a)<<endl;
    for(int j = 0; j < (int)sizeof(a)/(int)sizeof(*a); j++){
        cout<<a[j]<<endl;
    }
    cout<<findMin(a)<<endl;

    return 0; 
} 

double fourIntAvg(int a, int b, int c, int d){
    return (double)(a + c + b + d) / 4.0;
}

