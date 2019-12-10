#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<set>
using namespace std;
int indexOf(string c,string toFind)
{
return c.find(toFind);
}
bool isLetter(char c)
{
	if((c>='a' && c<='z') || (c>='A' && c<='Z'))
		return true;
	else 
		return false;
}
bool isdigit(char c)
{
	if(c>='0' && c<='9')
		return true;
	else 
		return false;
}
main()
{	
	set<string>nonT;	
	pair<set<string>::iterator,bool> ret;
	vector<string> prod(0);
 	ifstream file;
	file.open("cfg.txt");
	string line = "";		
	while(getline(file,line))
  {
		string _tmp_str_ =line;
		int _tmp_find_index_ = indexOf(_tmp_str_,"=")-1;
		string _tmp_non_terminal_= _tmp_str_.substr(0,_tmp_find_index_);
		string _tmp_right_side = _tmp_str_.substr(_tmp_find_index_+3,_tmp_str_.length());
	  ret =	nonT.insert(_tmp_non_terminal_);
	    if(ret.second==false)
    {
		  cout<<_tmp_non_terminal_<<" already present in set "<<endl;
   	}
	    else
      {
			cout<<_tmp_non_terminal_<<" inserted successfully in set "<<endl;
	     }
	  prod.push_back(_tmp_right_side);
}
vector<string> STATEMENT(0);
 
	cout<<"=================================\n";
	cout<<"ALL NON TERMINALS "<<endl;
	cout<<"=================================\n";
 	set<string>::iterator it;
 	for ( it=nonT.begin(); it!=nonT.end(); ++it){
	 cout << *it <<endl;
}
    cout<<"=================================\n";
	cout<<"ALL PRODUCTIONS \n";
	cout<<"=================================\n";
	for(unsigned int i = 0;i<prod.size();i++ ){
		cout<<prod.at(i)<<endl;
	}
	file.close();
}
