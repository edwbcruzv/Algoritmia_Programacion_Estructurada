typedef char* Elem;
//Si se modifica este paramatro cambia el tipo de dato de toda la estructura

int esmenor(Elem e1, Elem e2){
	if(strcasecmp(e1,e2)<0){
		return 1;
	} else {
		return 0;
	}
}