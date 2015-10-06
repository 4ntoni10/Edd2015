#include <iostream>
using namespace std;

int main()
{
    int *pv;
    int dim;

    cout << "Tamaño del arreglo" << endl;
    cin >> dim;
    pv = new int[dim];

    for(int i = 0; i < dim; i++){
        pv[i] = i+1;
        cout << pv[i] << endl;
    }

    delete[] pv;
    return 0;
}
