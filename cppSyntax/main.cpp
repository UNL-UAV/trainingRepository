#include<iostream>  
  
using namespace std;



double avrg(int a, int b, int c, int d);





double avrg(int a, int b, int c, int d) {

	double sum = a + b + c + d;
	double avg = sum / 4.0;
	return avg;

}


int main() 
{
    double var0 = 3.14;
    int var1 = 3;
    float var2 = 2.99;
    long var3 = 33;
    int varEmpty;
	

	std::cout<<" ===VAR TEST==="<<std::endl;    
    	std::cout<<var0<<std::endl;
	std::cout<<var1<<std::endl;
	std::cout<<var2<<std::endl;
	std::cout<<var3<<std::endl;
	std::cout<< varEmpty <<std::endl;	
	std::cout<< "Hello World!" <<std::endl; 


	
	std::cout<<" === SIZEOF TEST === "<<std::endl;
	int sizeOf0 = sizeof(var0);
	int sizeOf1 = sizeof(var1);
	int sizeOf2 = sizeof(var2);
	int sizeOf3 = sizeof(var3);

	std::cout<<sizeOf0<<std::endl;
	std::cout<<sizeOf1<<std::endl;
	std::cout<<sizeOf2<<std::endl;
	std::cout<<sizeOf3<<std::endl;


	std::cout<<" ===FIZZBUZZ TEST === "<<std::endl;
	for(int i = 0; i <= 100; i++) {
		if((i%3)==0) {
			std::cout<<"fizz"<<std::endl;
		} else if((i%5)==0) {
			std::cout<<"fizzbuzz"<<std::endl;
		} else {
			std::cout<<i<<std::endl;
		}
	}

	std::cout<<" === AVERAGE TEST === "<<std::endl;
	double avg = avrg(3,7,99,34);
	std::cout<<avg<<std::endl;



	std::cout<<" === ARRAY TEST ==="<<std::endl;
	double arr[50] = {109,784,32,9,347,90.2,374,829,10738,0.74,9037,4580,3945,80.8,702,13.948,12,3740,918,273,49,870,349,5.73,94,87,509,187.409,3782,9,47,3,91,827,409,21.8,730,470,540,9.7093,873,290,47,5,8,2,39,4.7,5023,945};

	double min = arr[0];
	for(int i = 1; i<=50; i++) {
		if(arr[i] < min) {
			min = arr[i];
		}
	}
	std::cout<<min<<std::endl;









    return 0; 
} 
