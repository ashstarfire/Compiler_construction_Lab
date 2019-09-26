#include<iostream>
#include<cstring>
using namespace std;
bool recognizer(string);
int main()
{
	string arr;
	cout<<"enter string: ";
	cin>>arr;
	bool a=	recognizer(arr);
	
}

bool recognizer(string input)
{
	int size=input.length();
	cout<<endl<<"size of input string is : "<<size;
	int index=0;
	int state=0;
	while(1){
	switch(state)
	{
		case 0:
			if(size>0 && input[index]=='a')
			{
				state=1;
				index++;
				size--;
				cout<<endl<<"case 0";
			}
			
			else if(size>0 && input[index]=='b')
			{
				state=3;
				index++;
				size--;
				cout<<endl<<"case 0";
			}
				else if(size==0)
				{
				cout<<"case 0"<<endl;
				cout<<"string accepted";
				return true;break;
			}
				
			
			else
			{
			
				state=4;
		         }
			break;
			
			
		case 1:
			if(size>0 && input[index]=='b')
			{
				state=2;
				index++;
				size--;
				cout<<endl<<"case 1";
			}
			
			else if(size>0 && input[index]=='a')
			{
				state=0;
				index++;
				size--;
				cout<<endl<<"case 1";
			}
			
			else
			{
				state=4;
			}
			break;
			
			
		case 2:
			if(size>0 && input[index]=='b')
			{
				state=1;
				index++;
				size--;
				cout<<endl<<"case 2";
			}
			else if(size>0 && input[index]=='a')
			{
				state=3;
				index++;
				size--;
				cout<<endl<<"case 2";
			}
			else
			{
				state=4;
			}
			break;
			
			
			case 3:
			if(size>0 && input[index]=='b')
			{
				state=0;
				index++;
				size--;
				cout<<endl<<"case 3";
			}
			else if(size>0 && input[index]=='a')
			{
				state=2;
				index++;
				size--;
				cout<<endl<<"case 3";
			}
			else
			{
				state=4;
			}
			break;
			
	
		case 4:
			cout<<"string rejected";
	        return false;
	}
}
}
