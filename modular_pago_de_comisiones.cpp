#include <iostream>
using namespace std;

int main() {
	//Se incializan las variables todas del tipo integer ya que no se esperan fracciones.
	int ventas, sueldoBase=800, comision, pagoTotal;
	
	//Se pide al usuario ingresar el numero de ventas y se almacena
	cout<<"Ingrese el numero de ventas: ";
	cin>>ventas;
	/*Se inicializa un loop del tipo for que vaya sumando
	individualmente las comisiones escalonadas de acuerdo a las
	especificaciones*/
	for (int i=0; i<=ventas;i++){
		
		if (i > 2 && i<9){	//Del item 3 al 8 se pagan 25 de comision.
			comision+=25;
		}if (i>8&&i<13){	//Del 9 al 12 se pagan 45.
			comision+=45;
		}if (i>12&&i<19){	//Del 13 al 18 se pagan 70.
			comision+=70;
		}
	}
	//Se suman el total de comisiones mas el sueldo base al pago total.
	pagoTotal = sueldoBase+comision;
	
	cout<<"El pago total es de: $"<<pagoTotal;
}
