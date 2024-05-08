#include <iostream>
#include <string> 
using namespace std;

int main () 
{
	char line[80]; 
	cout <<"Enter a line of text: ";
	cin.getline(line,80);
	
	int i,count=1;
	for (i=0; i<=80; i++) 
	{
		if (line [i] == ' ') 
		{
			if (line[1+1] != ' ')
			{
				count++;
			}
		}
	}
	cout << "\n number of words: "<<count;
	return 0; 
	
	
}
