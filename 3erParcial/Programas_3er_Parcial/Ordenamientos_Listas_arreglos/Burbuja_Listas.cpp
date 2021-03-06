#include <iostream>
#include <stdlib.h>

using namespace std;

struct nodo{
       int nro;        // en este caso es un numero entero
       struct nodo *sgte;
};

typedef struct nodo *Tlista;

Tlista inicio, fin;

void generarLista( Tlista &inicio, Tlista &fin, int n ) 
{
     Tlista q, t;
     
     for(int i=0; i<n; i++)
     {
         q = new(struct nodo);
         q->nro = rand()%51;
         
         if(inicio==NULL)
         {
              q->sgte = inicio;
              inicio  = q;
              fin     = q;          
         }
         else
         {
              q->sgte   = fin->sgte;
              fin->sgte = q;
              fin       = q;
         }
     }
     
     cout<<"\n\n\tLista de numeros generados... "<<endl;
}



void ordenarLista(Tlista lista)
{
     Tlista actual , siguiente;
     int t;
     
     actual = lista;
     while(actual->sgte != NULL)
     {
          siguiente = actual->sgte;
          
          while(siguiente!=NULL)
          {
               if(actual->nro > siguiente->nro)
               {
                    t = siguiente->nro;
                    siguiente->nro = actual->nro;
                    actual->nro = t;          
               }
               siguiente = siguiente->sgte;                    
          }    
          actual = actual->sgte;
          siguiente = actual->sgte;
           
     }
     
     cout<<"\n\n\tLista ordenada..."<<endl;

}
