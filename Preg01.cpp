#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float suma=0,factorial1=1,factorial2=1;
    float n, numero1,numero2,resultado;
    cout<<"Digite un numero: "; 
    cin>>n;
    
    numero1 = n+2;
    numero2 = n+4;
     for(int i=1;i<=n;i++)
    {
    for(int i=1;i<=numero1;i++){
        factorial1 *= i; //primero sacamos los factoriales     
        //suma +=factorial; //luego los sumamos
    }
    for(int i=1;i<=numero2;i++){
        factorial2 *= i; //primero sacamos los factoriales     
        //suma +=factorial; //luego los sumamos
    }
    
    resultado = factorial1 / factorial2;
    
		suma +=resultado;
	}
	
	
    
    cout<<"\nEl resultado es: "<<suma<<endl;
    
    system("pause");
    return 0;
}
