#include <iostream>

int main() {

    int n1, n2, nota;
    std::string res;
    char opc;

    inicio:
    
    std::cout << "Digite a primeira nota: ";
    std::cin >> n1;
    std::cout << "Digite a segunda nota: ";
    std::cin >> n2;

    nota = n1 + n2;
    
    (nota >= 60) ? res = "Aprovado" : res = "Reprovado";

    std::cout << "\Situaao do aluno: " << res << "\n";

    std::cout << "\nDigitar outras notas?[s/n]: ";
    std::cin >> opc;

    if (opc == 's' || opc == 'S') {
        goto inicio;
    }

    return 0;
}
