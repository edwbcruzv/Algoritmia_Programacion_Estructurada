typedef Lista Pila;
Pila empty(){
	return vacia();
}
Pila push(Elem e, Pila p){
	return cons(e,p);
}
int isEmpty(Pila p){
	return esVacia(p);
}
Elem top(Pila p){
	return cabeza(p);
}
Pila pop(Pila p){
	return resto(p);
}