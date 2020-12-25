#include <iostream>
#include <locale>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int vezes;
    const char *Frase;

    system("cls");

    cout << "Digite a frase: ";
    scanf("%[A-Z a-z 0-9]", Frase);
    
    vezes = 0;

    do
    {
        cout << "Digite o número de repetições: ";
        cin >> vezes;
    } while (vezes < 1);

    cout << endl;

    for (int i = 0; i < vezes; i++)
    {
        cout << Frase << endl;
    }

    return 0;
}