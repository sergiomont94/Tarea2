#include <iostream>
using namespace std;
class Fecha {
private:
	int Mes;
	int Dia;
	int A�o;

public:
	Fecha(int, int, int);
	int getMes();
	int getA�o();
	int getDia();
	void setMes(int);
	void setA�o(int);
	void setDia(int);

	void MostraFecha();



};


Fecha::Fecha(int mes, int dia, int a�o) {

	Dia = dia;
	A�o = a�o;

	if (mes >= 1 & mes <= 12) {
		Mes = mes;
	}
	else {
		Mes = 1;


	}




}

int Fecha::getA�o() {

	return A�o;
}

int Fecha::getDia() {
	return Dia;
}


int Fecha::getMes() {

	return Mes;
}

void Fecha::setA�o(int a) {

	A�o = a;
}

void Fecha::setDia(int d) {

	Dia = d;

}

void Fecha::setMes(int m) {

	Mes = m;

}

void Fecha::MostraFecha() {

	cout << "Fecha Acutal: " << Dia << "/" << Mes << "/" << A�o << endl;

}
int main() {
	Fecha f = Fecha(4, 3, 2018);
	f.MostraFecha();
	cout << "Modificando Fecha...";

	f.setDia(2);
	f.setMes(5);
	f.setA�o(2020);
	cout << "Fecha Moficada: " << endl;
	f.MostraFecha();



	system("pause");
}