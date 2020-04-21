#include<iostream>
using namespace std;

bool flag;
int k;
int s=0;
int num[11];
int ps[11];
int n;
int app;

int main()
{
flag=false;
cout<<"inserire in numero da cercare"<<endl;
cin>>n;

for(k=1;k<=10;k++)                  //ciclo input
{
   cout<<"inserire il "<<k<<" numero del vettore ";
   cin>>num[k];
}

for(k=1;k<=10;k++)                  //ciclo posizione
if(num[k]==n)
{
       flag=true;
       ps[k]=k;
       s=s+1;
       }
if(flag==true)
{
    cout<<"Abbiamo trovato il numero: "<<endl;
    cout<<"Il numero e' strato trovato "<<s<<" volte"<<endl;
}
else
    cout<<"Il numero non e' stato trovato"<<endl;

for(k=1;k<=10;k++)
{
   if(flag==true)
   {
   cout<<"il numero e' stato trovato nella " <<ps[k]<<" posizione"<<endl;
   }
}
   if(flag==false)
   cout<<"il numero non e' stato trovato in nessuna posizione"<<endl;
system("pause");
}
