#include<iostream>
using namespace std;


string reverseWord(string str);


int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	string s;
	cin >> s;
	
	cout << reverseWord(s) << endl;
	}
	return 0;
	
}

// } Driver Code Ends


//User function Template for C++

string reverseWord(string str){
    
  //Your code here
  string rsrs = str;
  int strlength = str.length();
  for(int i; i<str.length();i++)
  {
      rsrs[--strlength] = str[i];
  }
  return rsrs;
}