//  Permutations for array in c++

#include <bits/stdc++.h>
#include <string>
using namespace std;

void permute(string r , string output)
{
	if(r.length() == 0)
	{
		cout<<output<<" ";
		return;
	}
	for(int i=0 ; i<r.length() ; i++)
	{
		char ch = r[i];
		string left_substr = r.substr(0,i);
		string right_substr = r.substr(i+1);
		string rest = left_substr + right_substr;
		permute(rest , output+ch);
	}

}

int main()
{
	string r;
	string output="";

	cout<<"Enter the string : ";
	cin>>r;

	cout<<"\nAll possible strings are : ";
	permute(r , output);
	return 0;
}
