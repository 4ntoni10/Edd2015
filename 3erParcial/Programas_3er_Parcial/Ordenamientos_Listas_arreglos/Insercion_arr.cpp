#include<iostream>
using namespace std; 
int a[4]={4,1,7,2}; 
int n=4; 
int i,j,aux; 
void main(){ 
clrscr(); 
for(i=1;i<n;i++) 
{ 
j=i; 
aux=a; 
while(j>0 && aux<a[j-1]) 
{ 
a[j]=a[j-1]; 
j--; 
} 
a[j]=aux; 
} 
for(i=0;i<4;i++) 
{ 
printf("%d",a); 
} 
getchar(); 
} 