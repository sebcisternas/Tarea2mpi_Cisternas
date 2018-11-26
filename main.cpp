#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <ctime>
#include <stdio.h>

using namespace std;

void num_random (int n, int a[]){
srand(time(NULL));
for(int i=0;i<n-1;i++){
      a[i]=rand()%1000;
    }
}

void promedio(int a[],int n,float& sum,float& prom ){

 for(int i=0;i<n-1;i++){
      sum=sum+a[i];
    }
    prom=sum/n;
}

void varianza(int a[],int n,float& sum1,float&var ,float prom){

for(int i=0;i<n-1;i++){
     sum1= sum1+ (prom-a[i]);
    }
   var=(sum1*sum1)/(n-1);
}

void desviacion(float& des,float var){
  des=sqrt(var);
}

int main()
{
    int n=10000,sw=0,a[n],opcion;
    float sum,prom,sum1,var,des;
    for(int i=0;i<n-1;i++){
      a[i]=0;
    }

  while(sw==0){
    cout<<"(1)Llenar arreglo con numeros aleatorios de 1 a 1000 "<<endl;
    cout<<"(2)Calcular Promedio "<<endl;
    cout<<"(3)Calcular Varianza "<<endl;
    cout<<"(4)Calcular Desviacion Estandar"<<endl;
    cout<<"(5)Salir"<<endl<<endl  ;


    cout<<"Ingresa Opcion = ";


    cin>>opcion;

    if(opcion==1){
       num_random(n,a);
       std::cout<<"Arreglo llenado..."<<endl<<endl;
       cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
      system("clear");
    }

    if(opcion==2){
       sum=0;
       promedio(a,n,sum,prom);
       cout<<" Promedio es : "<<prom<<endl<<endl;
        cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
        system("clear");

    }

    if(opcion==3){
       sum=0,sum1=0;
       promedio(a,n,sum,prom);
       varianza(a,n,sum1,var,prom);
       cout<<"La varianza es = "<<var<<endl<<endl;
        cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
        system("clear");
    }


    if(opcion==4){
        sum=0,sum1=0;
        promedio(a,n,sum,prom);
        varianza(a,n,sum1,var,prom);
        desviacion(des,var);
        cout<<"La desvacion estandar es = "<<des<<endl<<endl;
      cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
      cout<<endl<<endl;
       system("clear");
    }


    if (opcion==5){
       sw=1;
       cout<<"Adiosin"<<endl<<endl;
       cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
       cout<<endl<<endl;
       system("clear");


    }

   if (opcion>5 || opcion<1){
      cout<<"Opcion erronea... : "<<endl<<endl;
      cout<<"Presione Enter para Continuar...";
       cin.ignore().get();
        cout<<endl<<endl;
         system("clear");
   }

  }
  return 0;
}
