#include <iostream>
#include <string>

using namespace std;

// Definición de la clase CuentaBancaria
class CuentaBancaria
{
private:
    string nombreTitular;
    string numeroCuenta;
    double saldo;

public:
    // Constructor
    CuentaBancaria(string _nombreTitular, string _numeroCuenta, double _saldo)
        : nombreTitular(_nombreTitular), numeroCuenta(_numeroCuenta), saldo(_saldo) {}

    // Método para depositar dinero en la cuenta
    void depositar(double cantidad)
    {
        saldo += cantidad;
        cout << "Depósito de $" << cantidad << " realizado. Nuevo saldo: $" << saldo << endl;
    }

    // Método para retirar dinero de la cuenta
    void retirar(double cantidad)
    {
        if (cantidad <= saldo)
        {
            saldo -= cantidad;
            cout << "Retiro de $" << cantidad << " realizado. Nuevo saldo: $" << saldo << endl;
        }
        else
        {
            cout << "Saldo insuficiente para realizar el retiro." << endl;
        }
    }

    // Método para consultar el saldo actual de la cuenta
    double consultarSaldo() const
    {
        return saldo;
    }
};

int main()
{
    // Crear una cuenta bancaria y realizar operaciones
    CuentaBancaria cuenta("Eduardo Portillo", "124785612", 2000);
    cuenta.depositar(270);
    cuenta.retirar(100);
    cuenta.retirar(1200);
    cout << "Saldo actual: $" << cuenta.consultarSaldo() << endl;

    return 0;
}
