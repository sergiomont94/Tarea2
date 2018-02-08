#include <iostream>
using namespace std;
class Fecha {
private:
	int Mes;
	int Dia;
	int Año;

public:
	Fecha(int, int, int);
	int getMes();
	int getAño();
	int getDia();
	void setMes(int);
	void setAño(int);
	void setDia(int);

	void MostraFecha();



};


Fecha::Fecha(int mes, int dia, int año) {

	Dia = dia;
	Año = año;

	if (mes >= 1 & mes <= 12) {
		Mes = mes;
	}
	else {
		Mes = 1;


	}




}

int Fecha::getAño() {

	return Año;
}

int Fecha::getDia() {
	return Dia;
}


int Fecha::getMes() {

	return Mes;
}

void Fecha::setAño(int a) {

	Año = a;
}

void Fecha::setDia(int d) {

	Dia = d;

}

void Fecha::setMes(int m) {

	Mes = m;

}

void Fecha::MostraFecha() {

	cout << "Fecha Acutal: " << Dia << "/" << Mes << "/" << Año << endl;

}
int main() {
	Fecha f = Fecha(4, 3, 2018);
	f.MostraFecha();
	cout << "Modificando Fecha...";

	f.setDia(2);
	f.setMes(5);
	f.setAño(2020);
	cout << "Fecha Moficada: " << endl;
	f.MostraFecha();



	system("pause");
}