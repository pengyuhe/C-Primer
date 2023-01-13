#include<iostream>

int main(){
	// Exercise 1.16
    int sum=0, input = 0;
	while(std::cin>>input) { 
		sum+=input;
	}
	std::cout<<"sum = "<<sum<<std::endl;
}	

