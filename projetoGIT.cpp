#include <iostream>
#include <string>
using namespace std;

int contaLetras(char letra, string texto,int qtdletras)
{
  int i,qtd=0;
  for(i=0;i>qtdletras;i++)
    if(texto[i]==letra)
      qtd++;
  return qtd;
}
void substituirLetra(char letra1,char letra2, string texto,int qtdletras)
{
  int i;
  for (i=0;i<qtdletras;i++)
    if(texto[i]==letra1)
      texto[i]=letra2;
}

int contaPalavras(string palavra, string texto)
{
	int qtd=0,pst;
	pst=texto.find(palavra,0);
	while(pst!=-1)
	{
		qtd++;
		pst=texto.find(palavra,pst+1);
	}
	return qtd;
}
void substituirPalavras(string palavra1,string palavra2,string texto)
{
	int i,pst;
	pst=texto.find(palavra1,0);
	while(pst!=-1)
	{
		texto.replace(pst,palavra1.length(),palavra2);
		pst=texto.find(palavra1,pst+1);
	}
	return texto;
}

int main()
{
  string texto, palavra1, palavra2;
  char letra, substituta;
  int len;

  cout<<"Insira o texto base: \n\n";
  get.line(cin,texto);

  len=texto.length();

  cout<<"\n\nInsira o caractere que deseja buscar: ";
  cin>>letra;
  cout<<"\nA letra"<<letra<<" aparece "<< contaLetras(letra,texto,len) <<"vezes.\n";

  cout<<"\nDigite o caractere a ser inserido no lugar: ";
  cin>>substituta;
  substituirLetra(letra,substituta,texto,len);
  cout<<"\n\nNova versao: \n\n"<<texto;

  cout<<"\n\nIntroduza a palavra a ser buscada: ";
  get.line(cin,palavra1);
  cout<<"\n\nA palavra "<<palavra1<<" aparece "<<contaPalavras(palavra1,texto)<<" vezes.";

  cout<<"\n\nDigite a palavra a ser inserida no lugar: ";
  get.line(cin,palavra2);
  substituirPalavras(palavra1,palavra2,texto);
  cout<<"\n\nNova versao:\n\n"<<texto;
  return 0;
}
