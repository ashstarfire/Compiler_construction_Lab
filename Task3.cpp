#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream input;
	input.open("input.txt");
	ofstream output;
	output.open("output.txt");
	char c= '\0';
	while(input.get(c))
	{
		output<<c;
	}
	input.close();
	output.close();
}
