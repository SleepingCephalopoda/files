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
 
	// Try to open data.bin for writing output in "binary" mode.
	ofstream binfile{"abc.bin", ios::binary};

	// check if file opened successfully
	if (binfile)
	{
		// Write variable to file.
		binfile.write(reinterpret_cast<char*>(&a), sizeof(a));
		binfile.write(reinterpret_cast<char*>(&b), sizeof(b));
		binfile.write(reinterpret_cast<char*>(&c), sizeof(c));
    }
    
    else
    {
		// Print error before program quits.
		cout << "Error opening data.bin";
		cout << endl;
	}
	
	// Optional in this case, destructor will close it automatically.
	binfile.close();
 
	return 0;
	
}
