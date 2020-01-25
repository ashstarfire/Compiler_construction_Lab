#include<iostream>
#include<fstream>
#include<sstream>
#include<set>
#include<map>
using namespace std;
set<string> allnonterminal;
multimap<string,string> prod;
set<string>::iterator nt;
multimap<string,string>::iterator p;
bool isNonTerminal(string c)
{
	 bool flag;
	 if(c[0] >= 'A' && c[0] <= 'Z')
    {
    	flag = true;
	}
	else
	{
		flag = false;
	}
	 return flag;
}
bool checkForNonTerminals(string r)
{
	stringstream ss(r);
	string word="";
	bool flag;
	while(ss>>word)
	{
		if(isNonTerminal(word))
		{
			flag = true;
		}
		else
		{
			flag = false;
		}
	}
	return flag;
}
void getLastNonTerminal(string l,string r)
{
	string previous = " ",next = " ";
	stringstream ss(r);
	while(ss >> next)
	{
		if(isNonTerminal(next))
		{
			previous = next;
		}
	}	
	string right = r;
	if(checkForNonTerminals(right))
	{
	   cout<<"Last non-terminal" <<previous<< "in production | "<<l<<" -> "<<r<<endl;	
	}
	else{
		cout<<"No non-terminal is present in production  | "<<l<<" -> "<<r<<endl;
	}	
}


int main()
{
	ifstream file;
	file.open("cfg1.txt");
	string line = "";
	while(getline(file,line))
	{
 	 string word = "";
 	 int equalIndex = line.find("=");
 	 string LHS = line.substr(0,equalIndex);
 	 string RHS = line.substr(equalIndex+1,line.length());
	 allnonterminal.insert(LHS);
	 prod.insert(make_pair(LHS,RHS));	 
	}
	file.close();
	for(p = prod.begin();p!= prod.end();p++)
	{
		getLastNonTerminal(p->first,p->second);
	}	
}
