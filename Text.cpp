// For keyboard and console I/O.
#include <iostream>
// For file I/O.
#include <fstream>

using namespace std;

int main( )
{
   // Create data.
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
	// Display data to console as formatted characters.
	cout << a << " " << b << " " << c;

	cout << endl << endl;
	
	// Try to open abc.txt for writing output.
	ofstream myfile {"abc.txt"};
	
	// Check if file opened successfully.
	if (myfile)
	
	{
		// Write data to text file.
		myfile << a << " " << b << " " << c;
	}
    
    else
    
    {
		// Print error before program quits.
		cout<<"Error opening abc.txt" << endl;
	}
	
	// Optional in this case - destructor will close it automatically.
	myfile.close();
 
	return 0;
	
}
