#include<bits/stdc++.h>
using namespace std; 
const int alp = 26;
int achou = 0;
struct no
{
    struct no *letra[alp];
    bool ver;
};
struct no *getNode(void)
{
    struct no *pNode =  new no; // aloca ponteiro
 
    pNode->ver = false;//seta q n é palavra 
 
    for (int i = 0; i < alp; i++)
        pNode->letra[i] = NULL; //seta a prox conexao pra null
 
    return pNode;//retorna o ponteiro 
}
void insert(struct no *root, string key)
{
    struct no *aux = root;//copia para nao perde ponteiro 
 	int sent=1;
    for (int i = 0; i < key.length(); i++) //percorre p string 
    {
        int index = key[i] - 'a'; //acha o valor da palavra
        if (!aux->letra[index]){ //verifica se ja exsite conexao
		 	sent=0;
            aux->letra[index] = getNode(); //se nao existe cria o no
 		}
 		if(aux->ver)
 			achou=1;
        aux = aux->letra[index];// avança para o prox no 
    }
    aux->ver = true; // diz que a palavra existe
    if(sent)
    	achou=1;
}

int main(){
	int n;
	string s;
	while(cin>>n && n){
		achou=0;
		struct no *root = getNode();
		for(int a=0;a<n;a++){
			cin>>s;
			if(!achou)
				insert(root, s);
		}
		if(achou)
			cout<<"Conjunto Ruim"<<endl;
		else 
			cout<<"Conjunto Bom"<<endl;
		
	}
	return 0;
} 
