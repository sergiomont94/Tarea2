 #include <iostream>
using namespace std;
class Cuenta {
private:
	int Saldo_Cuenta;

public:
	Cuenta(int);
	void Abonar(int);
	void Retirar(int);
	void Obtener_Saldo_Actual();

};

Cuenta::Cuenta(int saldo_cuenta) {
	if (saldo_cuenta >= 0) {
		Saldo_Cuenta = saldo_cuenta;


	}
	else {
		Saldo_Cuenta = 0;
		cout << "Saldo inicial es invalido..." << endl;
	}


}

void Cuenta::Abonar(int monto) {
	Saldo_Cuenta = Saldo_Cuenta + monto;
	cout << "Se ah abonado Lps. " << monto << endl;
}

void Cuenta::Retirar(int monto) {
	if (Saldo_Cuenta >= monto) {
		Saldo_Cuenta = Saldo_Cuenta - monto;
		cout << "Se ah retirado lps. " << monto << endl;
	}
	else {
		Saldo_Cuenta = Saldo_Cuenta;
		cout << "El monto a retirar excede el Saldo en cuenta" << endl;
	}
}

void Cuenta::Obtener_Saldo_Actual() {

	cout << "Su saldo Actual es :" << Saldo_Cuenta << endl;
}


int main() {
	Cuenta cu = Cuenta(0);
	cu.Obtener_Saldo_Actual();
	cu.Abonar(20);
	cu.Retirar(15);
	cu.Obtener_Saldo_Actual();

	cout << "Segunda Cuenta " << endl;
	Cuenta cu1 = Cuenta(-1);
	cu1.Obtener_Saldo_Actual();
	cu1.Abonar(100);
	cu1.Retirar(15);
	cu1.Obtener_Saldo_Actual();

	system("pause");
}
