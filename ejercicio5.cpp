#include <cmath>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



double CalcDesv (){
  float desv;
  float A;
  float B;
  int i=1;
  float sumcuadrados = 0;
  float sum = 0;
  int x;
  
  for(i=0; i<N+1 ; i++){
    cout<<"x"<<i<<":"
    cin>>x;

    }

  for (x=0; <N+1 ; i++){
    
        sumcuadrados = (sumcuadrados + pow(i, 2));
        sum = (sum + i);
    

  A = (1/n) * (sumcuadrados-1);
  B = pow((1/n) * (sum-1), 2);  
  desv = sqrt(A - B);
  std::cout << std::setprecision(3) << desv;return 0;


}


int main() {
    float N;
    cout<<"N: ";
    cin >> N;
