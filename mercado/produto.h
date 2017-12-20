#ifndef PROTUDO_H
#define PRODUTO_H
#include <string>
#include <iostream>
#include "conio.h"
using namespace std;

struct Product {
	float cost;
	float sale;
	float unitWeight;
};
struct Box {
	Product product;
	int amount;
	float weight;
};
int escolha() {
	int opcao = 1, selecao = 1;
	do {
		switch (selecao) {
		case 1:
			system("cls");
			cout << "selecione a opcao de quantidade:" << endl;
			cout << "unidade" << endl;
			break;
		case 2:
			system("cls");
			cout << "selecione a opcao de quantidade:" << endl;
			cout << "peso" << endl;
			break;
		default:
			break;
		}
		opcao = _getch();
		if (opcao == 72)
			selecao = 1;
		if (opcao == 80)
			selecao = 2;
	} while (opcao != 13);
	return selecao;
}
void inicio() {
	Box box;
	cout << "defina a porcentagem: " << endl;
	float x;
	cin >> x;
	box.product.sale = (float)((x / 100.00) + 1.00);
	while (true) {
		cout << "Digite o custo" << endl;
		cin >> box.product.cost;
		int selecao = escolha();
		if (selecao == 1) {
			cout << "informe a quantidade: " << endl;
			cin >> box.amount;
			cout << "O preco do produto faturado e: " << endl << (box.product.cost / box.amount)*box.product.sale << endl;
		}
		if (selecao == 2) {
			cout << "informe o peso total em Kg: " << endl;
			cin >> box.amount;
			cout << "informe o peso do produto Gramas: " << endl;
			cin >> box.product.unitWeight;
			cout << "O preco do produto faturado e: " << endl << (box.product.cost / (((box.amount*1000) / box.product.unitWeight)))*box.product.sale << endl;
		}
		system("pause");
	}
}




#endif // !PROTUDO_H

