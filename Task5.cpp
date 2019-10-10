#include <iostream>
#include <fstream>
#include <cctype>
#include <cstdlib>

using namespace std;

void filter_blank_spaces(ifstream& in_stream, ofstream& out_stream);

int main()
{
	ifstream fin;
	ofstream fout;

	fin.open("inputF.txt");

	if (fin.fail())
	{
		cout << "Error!\n";
		exit(1);
	}

	fout.open("outputF.txt");

	if (fout.fail())
	{
		cout << "Error!\n";
		exit(1);
	}

	filter_blank_spaces(fin, fout);
	fin.close( );
	fout.close( );
	cout << "Done.\n";

	return 0;
}

void filter_blank_spaces(ifstream& in_stream, ofstream& out_stream)
{
	char next;
	in_stream.get(next);

	do
	{
		if (isspace(next))
			out_stream << ' ';
		else
			out_stream << next;
		in_stream.get(next);
	}
	while (! in_stream.get(next));
}
