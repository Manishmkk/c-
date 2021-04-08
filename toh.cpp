// tower of hanoi 
// 2^n - 1 moves are required to move all the n disks from 1st poll to last poll in three
// poll tower og hanoi.



#include<iostream>
using namespace std;

//global variable to count the number of steps

int i=0;


		void toh(int n, int beg, int aux, int end)
			{
	if(n>=1)
	{
		
// all the recursion used inside are to move like toh(source, destination, help)
		toh(n-1,beg, end, aux);
		cout<<" step "<<++i<<"  disk "<<n<<" moves from  poll "<<beg<<" to poll  "<<end<<"\n";
		toh(n-1,aux,end , beg);

	}
}


//main function execution starts from here.			
int main()
{
	// numbers of disks
	
	cout<<"Enter number of disks ";
	int n;
	cin>>n;
// function call toh(number of disks, source, auxilary, destination)
	toh(n,1,2,3);
	
	
	return 0;
}
