#include <iostream>
using namespace std;
int main() {
 int lista[10];
 for(int i=0;i<10;i++){
 cin >> lista[i];
 }
 int a = 0;
 cin >> a;

 int tmp = 0;

 for(int i = 0; i < 10; i++){
  if(i == 0){
    if(lista[i] > a){
        tmp = lista[i];
        for(int j = 0; j < 10; j++){
            lista[j] = a;
            a = tmp;
            tmp = lista[j+1];
        }
    }
  }
  else if(i == 9){
    if(lista[i] > a)
        lista[i] = a;
  }
  else{
    if (lista[i-1] < a && lista[i] >= a){
        tmp = lista[i];
        for(int j = i; j < 10; j++){
            lista[j] = a;
            a = tmp;
            tmp = lista[j+1];
        }
    }
  }
}

 for(int i=0;i<10;i++){
 cout << lista[i] << " ";
 }
 return 0;
}
