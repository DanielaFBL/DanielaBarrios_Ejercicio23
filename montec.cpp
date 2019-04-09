#include <fstream>
#include <iostream>
using namespace std;
 
void lee(string filename);
string int(string filename);
int main () {
  double 
  string filename_1;
  string filename_2;
    
  filename_1 = "valores_x.txt";
  lee(filename_1);

  filename_2 = "valores_y.txt";
  lee(filename_2);
  return 0;
}

void lee(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }

  infile.close();
}

