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
