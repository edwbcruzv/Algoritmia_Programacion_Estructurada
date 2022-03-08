///*****TDA**arreglos***
//llamadas por referencia*******
///LEER  DESDE PANTALLA Y LLENARLO EN UN ARREGLO--
void LlenarArr(int*a,int n){
	int i;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
}
}
///IMPRIMIR LO QUE HAY EN UNA ARREGLO--------
void ImpArr(int*c,int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",c[i]);
	}
}
////ORDENAR UN ARREGLO DE int POR EL METODO DE LA BURBUJA-------
void burbuja(int*a,int n){
	int i,j,aux;
	for(j=0;j<n-1;j++)
		for(i=n-1;i>j;i--)
		   if(a[i]<a[i-1]){
			  aux=a[i]; a[i]=a[i-1]; a[i-1]=aux;
		   }
}

void LlenarMAtriz(int a[][100],int r,int c){
	int j,i;
	for(j=0;j<r;j++){
		for(i=0;i>c;i++)
			scanf("a[%d][%d]=%d ",j,i,&a[j][i]);
	}
}

void ImpMAtriz(int a[][100],int r,int c){
	int j,i;
	for(j=0;j<r;j++){
		for(i=0;i>c;i++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
