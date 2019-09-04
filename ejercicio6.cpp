#include <iostream>
using namespace std;
int main(){
  double med;
  int n;
  cout<<"Ingresar n=";
  cin>>med;
  for (int i=0;i<=(med-1);i++){
    for (int i=0;i<=(med-1);i+=1){
      n+=1;
      if((n%2)==0){
        cout<<"@";
      }else{
        cout<<"#";
      }
    }
    cout<<"\n";
  }

}
