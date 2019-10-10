#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int i=0;
	ifstream input;
	input.open("source.txt");
	
	ofstream output;
	output.open("output.txt");
	
	char c = '\0';
	int counter=0;
	
	while(input.get(c))
	{
		if(c=='{')
		{
			do
			{
				input.get(c);
			}
			while(c != '}');
		}
		else if(c=='\n')
		{
			if(counter==0)
			{
			}
			else
			{
				output<<c;
				counter=0;
			}
		}
		else if(c=='\t')
		{
			if(counter==0)
			{
				output<<c;
			}
			else
			{
			}
			
		}
		else if(c == ' ')
		{
			if(counter==0)
			{
			}
			else
			{
				output<<c;
				counter=0;
			}
		}
		else
		{
			output<<c;
			counter++;
		}
	}
	input.close();
	output.close();
}
