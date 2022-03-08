typedef struct Nodo
	{
		Elem Dato;
		struct Nodo * Sig;
	} * Lista;

Lista vacia (){return NULL;}
void impElem(Elem e){
	printf("%s\n",e);
}

Lista cons(Elem e, Lista l){
	Lista t = (Lista)malloc(sizeof(struct Nodo));
	t -> Dato = e;
	t -> Sig = l;
	return t;
}

int esVacia(Lista l){return l == vacia();}

Elem cabeza(Lista l){return l->Dato;}

Lista resto(Lista l){return l->Sig;}

int numElem(Lista l){
	if (esVacia(l)){
		return 0;
	} else {
		return 1+numElem(resto(l));
	}
}

void impLista(Lista l){
	if(!esVacia(l)){
		impElem(cabeza(l));
		impLista(resto(l));
	}
}

Lista ordLista(Lista l){
	if (esVacia(l))
	{
		return l;
	} else {
		//return inSort(cabeza(l),ordLista(l))
	}
}