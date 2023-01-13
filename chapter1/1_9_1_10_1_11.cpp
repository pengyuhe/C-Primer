#include<iostream>

int main(){
	// Exercise 1.9
    int sum=0,i=50;
	while(i<=100){
		sum+=i;
		i++;
	}
	std::cout<<"sum = "<<sum<<std::endl;

	// Exercise 1.10
	int start = 10;
	while(start>=1){
		std::cout<<start<<" ";
		start--;
	}
	std::cout<<std::endl;


	// Exercise 1.11
	int s,e;
	std::cin>>s>>e;

	for(int i=s;i<=e;i++){
		std::cout<<i<<" ";
	}
	std::cout<<std::endl;
}	

