#include<iostream>
#include<conio.h>
#include<math.h>

int main()
{
	int num;
	std::cin>>num;
	int t= floor(log10(num)+1);
	std::cout<<"\n"<<t;
	return 0;
}
