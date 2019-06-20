#include<iostream>
#include<math.h>
using namespace std;
int Arreglo1[7];
int Resul;

class Arreglo{
	public:
		void Suma (){
			cout<<"Este programa realiza la suma de los componentes de un arreglo te tamaño 7"<<endl;
			cout<<"Ingresa los 7 valores del arreglo"<<endl;
for (int i=0;i<7;i++){
cin>>Arreglo1[i];
			
		}
		for(int i=0;i<7;i++){
			Resul=Arreglo1[i]+Resul;
		}
		cout<<"La suma de los números es "<<Resul<<endl;
	}
	};
	int main(){
		Arreglo Carlos;
		Carlos.Suma();
		return 0;
	}
