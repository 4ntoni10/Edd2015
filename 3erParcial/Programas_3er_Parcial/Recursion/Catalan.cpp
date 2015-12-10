#include <iostream> 
#include <vector> 
#include <cstdlib> 
using namespace std; 

int main() { 
      int suma=0, n; 
      vector<int> arreglo; 
      cout <<"Cuantos números quiere almacenar: "; 
      cin >> n; 

      for(int i=0, k=0; i<n; i++) { 
            cout << "Indicar valor del elemento " <<(i+1) << "/" << n << ": "; 
            cin >> k; 
            suma+= k; 
            arreglo.push_back(k); 
      } 
      cout << "La media es " << (suma/n) << endl; 

       
      return 0; 
}