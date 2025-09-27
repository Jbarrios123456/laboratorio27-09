#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream datos("datos.txt");   
    if (!datos.is_open()) {
        cout << "¡¡¡ No se pudo abrir el acrchivo, estudie mas !!!" << endl;
        return 0;
    }else{
    	cout<<"FELICIDADES se pudo abrir el archivo :D"<<endl;
    	cout<<"\n";
    	cout<<"Hice mi mejor intento :C \n";
	}
}

