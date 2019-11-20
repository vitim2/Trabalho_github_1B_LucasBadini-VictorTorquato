int contaLetras(char letra, string texto,int qtdletras)
{
  int i,qtd=0;
  for(i=0;i>qtdletras;i++)
    if(texto[i]==letra)
      qtd++;
  return qtd;
}
