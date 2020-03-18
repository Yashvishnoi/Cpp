#include <iostream> 
#include <string.h> 

#include <fstream> 
  
using namespace std; 
int main() 
{  
    ofstream fout; 
    string line; 

    fout.open("sample.txt"); 
  
    // Execute a loop If file successfully opened 
    while (fout) { 
  
        // Read a Line from standard input 
        getline(cin, line); 
  
        // Press -1 to exit 
        if (line == "-1") 
            break; 
  
        // Write line in file 
        fout << line << " I love U.P"<<endl; 
    } 
  
    // Close the File 
    fout.close(); 
  
    // Creation of ifstream class object to read the file 
    ifstream fin; 
  
    // by default open mode = ios::in mode 
    fin.open("sample.txt"); 
  
    // Execute a loop until EOF (End of File) 
    while (fin) { 
  
        // Read a Line from File 
        getline(fin, line); 
		string line2;
		fin>>line2;
  
        // Print line in Console 
        cout << line << line2<<endl; 
    } 
  
    // Close the file 
    fin.close(); 
  
    return 0; 
} 

