#include<iostream>
#include"addition.h"
#include"division.h"
#include"result.h"
int main()
{
	float first_num, second_num;

	std::cout<<"Enter the first number\t";
	std::cin>>first_num;
	std::cout<<"Enter second number\t";
	std::cin>>second_num;

	std::cout<<"addition result:"<<std::endl;
	print_result(addition(first_num,second_num));	
	std::cout<<"division result:"<<std::endl;
	print_result(division(first_num,second_num));
}
