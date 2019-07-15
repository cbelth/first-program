#include <iostream>
#include <cmath>
using namespace std;


int main()
{
int num=0;
int i,j;
int X;


cout<<"Enter number of primes you want to generate."<<endl;
cin>>num;


for(j=1;j<999999999999999999;j++)
	{
	if(j<2)
	        {
       	        }
	if(j==2)
       		{
       		cout<<"Primes:"<<endl<<j;
		X=X+1;
		cout<<"     Prime number "<<X<<endl;
		if(X>=num)
			{
			return 0;  //break;
			}
       		}
	else
     		{
		for(i=2;i<j;i++)
               		{
               		if(j%i==0)
                       		{
                                break;
				X=X+1;
				if(X>=num)
					{
					return 0;  //break;
					}	
                       		}
               		else
                       		{
                       		if(i==j-1)
                               		{
                               		cout<<j;
					X=X+1;
					cout<<"     Prime number "<<X<<endl;
					if(X>=num)
						{
						return 0;  //break;
						}
                               		}
                       		}
              	  	}
        	}
	}
return 0;
}
