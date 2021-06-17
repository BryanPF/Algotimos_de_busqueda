 #include "stdafx.h" 
 #include <iostream>
  
using namespace std;

int main(){
	//Algoritmo de busqueda secuencial
	int clave,encontrado, n, i, j;
	cout<< "Ingrese dimensión del arreglo: ";
	cin>> n;
	Cout<<endl;
	
	int* arreglo =new int[n];
	
	for (i = 0;i < n;i++){
		cout<< "Ingrese dato [" << i<< "]: ";
		cin>> arreglo[i];
	}
	
	cout<< "Ingrese dato que desea buscar: " << endl;
	cin>> clave;
	
	encontrado =0;
	
	for(j=0; j< n;j++){
		if(arreglo[j]==clave){
			cout<< "Se encontro el " << clave<< " en laposicion [" << j<< "]" << endl;
			encontrado = 1;	
		}
	}
	
	delete[] arreglo;
	if(encontrado !=1)
		cout<<"No se encontro el dato"<<endl;
	
	//-------------------------------------------//
	
	//Algoritmo de busqueda binaria
	int n, i, A[30], num, primero, ultimo, medio;
    cout<<"Ingrese un arreglo ordenado: ";
    cout<<"Cuantos elementos te gustaria ingresar?: ";
    cin>>n;
    
    for (i=0; i>A[i]; 
    {
        cout<<"Ingrese el numero que desea buscar: ";
        cin>>num;
    }
    primero=0;
    ultimo=n-1;
    meedio=(primero+ultimo)/2;
    while (primero<=ultimo); 
    {
        if (A[medio]< num);
        {
            primero=medio+1;
        } else if (A[medio]== num) 
        {
            cout<<" Se encontro la posición ";
            cout<<medio+1;
            break;
        }
        else {
            ultimo = medio - 1;
        }

        medio = (primero+ultimo)/2;
    }
    if (primero>ultimo)
    {
        cout<<num<<" no se encontro";
    }
		
	return 0;	
	
}



