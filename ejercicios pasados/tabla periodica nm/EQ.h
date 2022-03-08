typedef struct 
{
	char n[50];//nombre
	char s[5];//simbolo
	int na;//numero atomico
	float ma;//masa atomica
}Elemento;

int LeeTabla(FILE *aa,Elemento *Elms[]){
	int i=0,x=0;
	char pal[80];
	while(fscanf(aa,"%s",pal)==1){
		if (i==0||i%4==0){
			Elms[x]=(Elemento*)malloc(1000000);//sizeof(struct Elemento));
			strcpy(Elms[x]->n,pal);
		} else if (i==1||((i-1)%4)==0){
			strcpy(Elms[x]->s,pal);
		} else if (i==2||((i-2)%4)==0){
			Elms[x]->na = StrToInt(pal);
		} else if (i==3||((i-3)%4)==0){
			Elms[x]->ma = StrToFlo(pal);
			x++;
		}
		i++;
	}
	return i;
}

void ImpElemento (Elemento e){
	int i;
	printf("\n\nNombre: %s\nSimbolo: %s\nNumero Atomico: %d\nMasa Atomica: %.3f\n\n",e.n,e.s,e.na,e.ma);
}

void ImpElementos (int nElems,Elemento *Elms[]){
	int i;
	for (i=0;i<nElems/4;i++){
		Elemento e = *Elms[i];
		ImpElemento(e);
	}
}

void BucarElemento(char *nom, int n, Elemento *Elms[]){
	//tolower
	int L=0, R=n/4, m, h=1;
	while(h){
		m = (L+R)/2;
		if(L>R){
			printf("Elemento no encontrado");break;
		} else if(strcasecmp(Elms[m]->n,nom)<0){
			L = m+1;
		} else if(strcasecmp(Elms[m]->n,nom)>0){
			R = m-1;
		} else if(strcasecmp(Elms[m]->n,nom)==0){
			ImpElemento(*Elms[m]);break;
		}
	}
}

