#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
 
float * lee(string filename, int *puntos);
float suma(float *v_x, int puntos) ;

int main () {
    
  float *v_x = NULL;
  float *v_y = NULL;
  int x = 0;
  int y = 0;
    

  v_x = lee("valores_x.txt", &x);

  v_y = lee("valores_y.txt", &y);
 
 
  cout << suma(v_x, x) << " " << suma(v_y, y) << endl;
 
  return 0;
}

float * lee(string filename, int *puntos){
  ifstream infile; 
  string line;

  
  int j;
  int lineas=0;
  float *array;
    
  infile.open(filename);
  getline(infile, line);
  while(infile){
    lineas++;
    getline(infile, line);
  }

  infile.close();
  *puntos = lineas;
  array = new float[lineas];
  j=0;
  infile.open(filename); 
  getline(infile, line);  
  while(infile){
    array[j] = atof(line.c_str());
    j++;
    getline(infile, line);
  }
  infile.close();

  return array;
}

float suma(float *v_x, int puntos){
  float z = 0;
  int j;
  
  for(j=0;j<puntos;j++){
    z += v_x[j];
  }
  return z;
}
