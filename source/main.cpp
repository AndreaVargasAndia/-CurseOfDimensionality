#include <iostream> 
#include <vector> 
#include <stdio.h>     
#include <stdlib.h>     
#include <time.h> 
#include <cmath>

using namespace std; 
double distance(vector<int> x,vector<int> y)
{
  double d=0;
  for(int i=0;i< x.size();i++)
  {
    d+=pow((x[i]-y[i]),2);
  }
  cout<<endl;
  return sqrt(d);
}
int main() 
{ 
  int ROW;
  cout<<"Tamaño conjuto de datos ";
  cin>>ROW;
  cout<<endl;
  cout<<"Tamaño del vector ";
  int COL;
  cin>>COL;
    srand (time(NULL));
    int a=rand() % ROW;
    vector<vector<int> > vec; 

    for (int i = 0; i < ROW; i++) { 
        vector<int> v; 
        for (int j = 0; j < COL; j++) {
            v.push_back(a); 
            a =rand() % ROW; 
        } 
        vec.push_back(v); 
    }
    for (int i = 0; i < vec.size(); i++) { 
        for (int j = 0; j < vec[i].size(); j++){ 
          cout << vec[i][j] << " "; 
        }
        cout << endl; 
    }

    for (int i = 0; i < ROW; i++) { 
          for (int j = 1; j <ROW; j++) {
            if(i<j){
              cout<< distance(vec[i],vec[j]); 
              cout<<endl;
            }         
          } 
      }
    return 0; 
}