#include<bits/stdc++.h>

int main()
{
	int n,m;
	int a[n];
	std::cout<<"Enter size of array ";
	std::cin>>n;
	for(int i=0;i<n;i++)
	{
		std::cin>>a[i];
	}
	for(int i=0; i<n-1;++i)
	{
		for(int j=i+i; j<n;++j)
		{
			if(a[j]<a[i])
			{
				m = a[j];
				a[j] = a[i];
				a[i] = m;
			}
		}
		
	}
	for(int i=0;i<n;++i)
	{
		std::cout<<a[i]<<" ";
	}
}
