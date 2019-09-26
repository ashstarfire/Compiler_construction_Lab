#include<iostream>
#include<stdio.h>
#include<string.h>
#include<cstdlib>
using namespace std;
int recognizer(char input[])
{
		int size=strlen(input);
		int index=0;
		int state=0;
		while(1)
		{
		switch(state)
		{
			case 0:
				if(size>0 && input[index]=='a')
				{
					state=1;
					index++;
					size--;
				}
				else
				state=4; 
				break;
				
			case 1:
				if(size>0 && input[index]=='b')
				{
					state=2;
					index++;
					size--;
				}
				else
				state=4;
				break;
				
			case 2:
				if(size>0 && input[index]=='b')
				{
					state=1;
					index++;
					size--;
				}
				else if(size>0 && input[index]=='c')
				{
					state=3;
					index++;
					size--;
				}
				else				
				   state=4;
				break;
				
			case 3:
			    if(size==0)
				{
					cout<<"Accept";
					return 1;
				}	
					else					
						state=4;
						break;
			
			case 4:
			    cout<<"Rejected";
				return 1;			
								
		}	
	}
}
int main()
{
	char x[100];
	cout<<"\nEnter a string: \n";
	cin>>x;
	cout<<endl;
	recognizer(x);
}

