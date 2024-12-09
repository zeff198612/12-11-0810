#include <iostream>
#include <string>

using namespace std;

class Estudante {
public:
    string nome;
    int idade;

    void mostrar() {
        cout << nome << ", " << idade << endl;
    }
};

int main() {
    Estudante novoEstudante;
    cin >> novoEstudante.nome >> novoEstudante.idade;
    novoEstudante.mostrar();
    return 0;
}