#include <iostream>

using namespace std;

// #01: Definição da classe
class nomeClasse {
    // #02: Declaração de membros privados (dados e funções) da classe
    private:
        int valorPrivado;
    
    // #03: Declaração de membros públicos (dados e funções) da classe
    public:
        int valorPublico;
        
        void funcaoPublica() {
            cout << "Esta é a minha primeira função" << endl;
        }
};

// Fim da classe 'nomeClasse', com o terminador ';'

int main() {
    // #04: Criação de um objeto do tipo da classe
    nomeClasse objetoNovo;
    nomeClasse outroObjeto;

    // #05: Podemos aceder e modificar os dados de um objeto público
    objetoNovo.valorPublico = 10;

    // #06: E também podemos usar as funções definidas dentro da classe
    objetoNovo.funcaoPublica();
    outroObjeto.funcaoPublica();

    return 0;
}