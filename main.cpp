#include <iostream>

using namespace std;

char lowercase_alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
char uppercase_alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};


string multChar(char valor, int qt)
{
	char resultado[qt];

	for (int i = 0; i < qt; i++)
	{
		resultado[i] = valor;
	}

	return resultado;
}

int main()
{
	system("clear");

	string palavra = "abacaxi";
	char letrasAcertadas[palavra.size()];

	for (size_t i = 0; i < palavra.size(); i++)
	{
		if (palavra[i] == ' ')
		{
			letrasAcertadas[i] = ' ';
		}

		else
		{
			letrasAcertadas[i] = '_';
		}
	}

	int chances = (int)palavra.size() * 2;
	int letrasRestando = palavra.size();
	char letra;

	bool ganhou = false;
	while (!ganhou)
	{
		cout << multChar('=', 30) << "\n";
		cout << "            FORCA\n";
		cout << multChar('=', 30) << "\n";

		cout << "\nChances: " << chances << "\n";
		cout << "Letras restando: " << letrasRestando << "\n\n";

		cout << letrasAcertadas << "\n\n";

		if (chances == 0)
		{
			ganhou = false;
			break;
		}

		cout << "Digite uma letra: ";
		cin >> letra;

		for (size_t i = 0; i < palavra.size(); i++)
		{
			if (palavra[i] == letra)
			{
				letrasAcertadas[i] = letra;
				letrasRestando--;
			}
		}

		if (palavra == letrasAcertadas)
		{
			ganhou = true;

			cout << "Chances: " << chances << "\n\n";
			cout << letrasAcertadas << "\n\n";
		}

		chances -= 1;
		system("clear");
	}

	cout << "\nA palavra era: " << palavra << "\n";

	if (ganhou)
	{
		cout << "\nParabéns,você acertou!\n\n";
	}

	else
	{
		cout << "\nSuas chances acabaram! Tente da próxima vez...\n\n";
	}
}
