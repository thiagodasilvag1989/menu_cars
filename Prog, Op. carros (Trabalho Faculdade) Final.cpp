#include <iostream>
#include <cstdlib>
#include <locale.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Portuguese");
   	int opc;
	float valor,vl1,vl2,total;
	int op1=0,op2=0,op3=0,op4=0;
	cout <<"$$$informe o valor de frabrica do ve�culo: $$$";
	cin >>valor;
	do{
	cout << "||||||Escolha os opicionais||||||\n";
	cout << "1 - Trio El�trico\n";
	cout << "2 - Ar-Condicionado\n";
	cout << "3 - Dire��o Hidr�ulica\n";
	cout << "4 - Completo (Trio + Ar + dire��o hidr�ulica)\n";
	cout << "5 - Nenhum\n";
	cout << "0 - Sair\n";
	cout << "Informe o c�digo da op��o desejada: ";
	cin >>opc;
		switch(opc){
			case 1:vl1 =valor+(valor*2)/100; total=vl1+((vl1*8)/100); op1++; break;
			case 2:vl1 =(valor*2)/100 ;total=(valor+vl1); op2++; break;
			case 3:vl1 =(valor*2)/100 ;total=(valor+vl1); op3++; break;
			case 4:vl1 =valor+((valor*6)/100); vl2=vl1+((vl1*8)/100); total=vl2-((vl2*3.5)/100); op4++; break; 
			case 5:total = valor; break;
	        case 0: opc=0;break;
			default: cout <<"Opicinal Inv�lido!"; break;
			}
			cout <<"Mais Algum Opcional? (1:Sim) ou (0:N�o): ";
			cin >>opc;
			{
			cout <<"===========================================";
			cout <<"\nValor Total do Autom�vel R$: " <<total;}	           
			cout <<"\n===========================================\n";
		system("pause");
		cout <<"Sair? (1:Sim) ou (0:N�o): ";
		cin >>opc;
		}while(opc!=0);
			system("cls");									
			{
		cout <<"\nTrio El�trico x " << op1 <<"\nAr-Condicionado x " << op2 <<"\nDire��o Hidr�ulica x " << op3 <<"\nCompleto x "<<op4;}
}
