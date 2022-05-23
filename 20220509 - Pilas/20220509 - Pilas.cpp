#include <iostream>

using namespace std;

//PILA
class Pila
{
	//atributos
	int tamaño = 5;
	int elementos[5];
	int indice;
public:
	//constructor
	Pila()
	{
		indice = 0;
	}
	//métodos
	//Pila llena
	bool PilaLlena()
	{
		if (indice == tamaño)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Pila vacia
	bool PilaVacia()
	{
		if (indice == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	//Insertar elemento
	void Insertar(int elemento)//Push
	{
		if (PilaLlena())
		{
			cout << "La pila esta llena." << endl;
		}
		else
		{
			elementos[indice] = elemento;
			indice = indice + 1;
		}
	}
	/// Quitar elemento
	int Quitar() // Pop
	{
		if (PilaVacia())
		{
			cout << "No hay en elementos en la pila" << endl;
			return NULL;
		}
		else
		{
			indice = indice - 1;
			return elementos[indice];
		}
	}
	//Imprimir
	void Imprimir()
	{
		for (int i = indice - 1; i >= 0; i--)
		{
			cout << "|\t" << elementos[i] << "|" << endl;
			cout << "-----------" << endl;
		}
	}
	void Invertir()
	{
		int indicePosterior = indice - 1;
		for (int i = 0; i < indice / 2; i++)
		{
			int temp = elementos[i];
			elementos[i] = elementos[indicePosterior];
			elementos[indicePosterior] = temp;
			indicePosterior--;
		}
	}

	void Invertir()
	{
		int indicePosterior = indice;
		for (int i = 0; i < indice / 2; i++)
		{
			int temp = elementos[i];
			elementos[i] = elementos[indicePosterior];
			elementos[indicePosterior] = temp;
			indicePosterior--;
		}
	}//MABERIX MILNER ALARICO MAMANI 2 pts
};

void Menu()
{
	cout << "1) Insertar elemento " << endl;
	cout << "2) Quitar elemento " << endl;
	cout << "3) Imprimir pila " << endl;
	cout << "4) Invertir elementos" << endl;
	cout << "0) Salir " << endl;
}

int main()
{
	/*cout << 4 / 2 << endl;
	cout << 5 / 2 << endl;
	cout << 6 / 2 << endl;*/

	int opcion = 0;
	int elemento = 0;
	Pila pila = Pila();
	do
	{
		Menu();
		cin >> opcion;
		switch (opcion)
		{
		case 1:
			cout << "Ingrese el elemento" << endl;
			cin >> elemento;
			pila.Insertar(elemento);
			break;
		case 2:			
			cout << "El elemento quitado es: " << pila.Quitar() << endl;
			break;
		case 3:
			pila.Imprimir();
			break;
		case 4:
			pila.Invertir();
			break;
		default:
			cout << "opción no valida" << endl;
			break;
		}
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
		cout << "++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
	} while (opcion != 0);
}