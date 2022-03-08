#include<stdio.h>
#include<conio.h>

struct elemento{
	char nombre[25];
	char simbolo[10]; 
	char grupo[8];
	int periodo;
	int noatomico;
	int nomasa;
	int protones;
	int neutrones;
	int electrones;
	char tipoelem[25];
}hidrogeno={"Hidrogeno","H","IA",1,1,1,1,0,1,"Gas"},
helio={"Helio","He","VIII",1,2,4,2,2,2,"Gases Nobles"},
litio={"Litio","Li","IA",2,3,7,3,4,3,"Metal Alcalino"},
berilio={"Berilio","Be","IIA",2,4,9,4,5,4,"Metal Alcalinotérreo"},
boro={"Boro","B","IIIA",2,5,10,5,5,5,"Metaloide"},
carbono={"Carbono","C","IVA",2,6,12,6,6,6,"No Metal"},
nitrogeno={"Nitrogeno","N","V",2,7,14,7,7,7,"No Metal"},
oxigeno={"Oxigeno","O","IA",2,8,16,8,8,8,"No Metal"},
fluor={"Fluor","F","VII",2,9,19,9,10,9,"No Metal"},
neon={"Neon","Ne","VIII",2,10,20,10,10,10,"Gases Nobles"},
sodio={"Sodio","Nav","IA",3,11,23,11,12,11,"Metal Alcalino"},
magnesio={"Magnesio","Mg","IIA",3,12,24,12,12,12,"Metal Alcalinotérreo"},
aluminio={"Aluminio","Al","IIIA",3,13,27,13,14,13,"Metal Del Bloque P"},
silicio={"Silicio","Si","IVA",3,14,28,14,14,14,"Metaloide"},
fosforo={"Fosforo","P","VA",3,15,31,15,16,15,"No Metal"},
azufre={"Azufre","S","VIA",3,16,32,16,16,16,"No Metal"},
cloro={"Cloro","Cl","VII",3,17,35,17,19,17,"No Metal"},
argon={"Argon","Ar","VIII",3,18,40,18,22,18,"Gases Nobles"},
potasio={"Potasio","K","IA",4,19,39,19,20,19,"Metal Alcalino"},
calcio={"Calcio","Ca","IIA",4,20,40,20,20,20,"Metal Alcalinotérreo"},
escandio={"Escandio","Sc","IIIB",4,21,45,21,24,21,"Metal de Transicion"},
titanio={"Titanio","Ti","IVB",4,22,48,22,26,22,"Metal de Transicion"},
vanadio={"Vanadio","V","VB",4,23,50,23,27,23,"Metal de Transicion"},
cromo={"Cromo","Cr","VIB",4,24,52,24,28,24,"Metal de Transicion"},
manganeso={"Manganeso","Mn","VIIB",4,25,55,25,30,25,"Metal de Transicion"},
hierro={"Hierro""Fe","VIIIB",4,26,55,26,29,26,"Metal de Transicion"},
cobalto={"Cobalto","Co","VIIIB",4,27,59,27,32,27,"Metal de Transicion" },
niquel={"Niquel""Ni","VIIIB",4,28,58,28,30,28,"Metal de Transicion"},
cobre={"Cobre""Cu","IB",4,29,64,29,35,29,"Metal de Transicion"},
zinc={"Zinc","Zn","IIB",4,30,65,30,35,30,"Metal de Transicion"},
galio={"Galio","Ga","IIIA",4,31,70,31,39,31,"Metal"},
germanio={"Germanio","Ge","IVA",4,32,72,32,40,32,"Metaloide" },
arsenico={"Arsénico","As","VA"4,33,74,33,41,33,"Metaloide"} ,
selenio={"Selenio","Se","VIA",4,34,79,34,45,34,"No Metal"},
bromo={"Bromo","Br","VIIA",4,35,80,35,45,35,"No Metal"},
kripton={"Kripton","Kr","VIII",4,36,84,36,48,36,"Gases Nobles"},
rubidio={"Rubidio","Rb","IA",5,37,86,37,49,37,"Metal Alcalino"},
estroncio={"Estroncio","Sr","IIA",5,38,88,38,50,38,"Metal Alcalinotérreo"},
itrio={"Itrio","Y","IIIB",5,39,89,39,50,39,"Metal de Transicion"},
circonio={"Circonio","Zr","IVB",5,40,91,40,51,40,"Metal de Transicion"},
niobio={"Niobio","Nb","VB",5,41,93,41,52,41,"Metal de Transicion"},
molibdeno={"Molibdeno","Mo","VIB",5,42,96,42,54,42,"Metal de Transicion"},
tecnecio={"Tecnecio","Tc","VIIB",5,43,98,43,55,43,"Metal de Transicion"},
rutenio={"Rutenio","Ru","VIIIB",5,44,101,44,57,44,"Metal de Transicion"},
rodio={"Rodio","Rh","VIIIB",5,45,102,45,57,45,"Metal de Transicion"},
paladio={"Paladio","Pd","VIIIB",5,46,106,46,60,46,"Metal de Transicion"},
plata={"Plata","Ag","IB",5,47,107,47,61,47,"Metal de Transicion"},
cadmio={"Cadmio","Cd","IIB",5,48,112,48,64,48,"Metal de Transicion"},
indio={"Indio","In","IIIA",5,49,114,49,65,49,"Metal Del Bloque P"},
estaño={"Estaño","Sn","IVA",5,50,118,50,68,50,"Metal Del Bloque P"},
antimonio={"Antimonio","Sb","VA",5,51,121,51,70,51,"Metaloide"},
telucio={"Telurio","Te","VIA"5,52,127,52,75,52,"Metaloide"}, 
yodo={"Yodo","I","VIIA"5,53,127,53,74,53,"No Metal"},
xenon={"Xenon","Xe","VIII",5,54,131,54,77,54,"Gases Nobles"},
cesio={"Cesio","Cs","I",6,55,133,55,78,55,"Metal-Alcalino"},
bario={"Bario","Ba","IIA",6,56,137,56,81,56,"Metal Alcalinotérreo"},
lantano={"Lantano","La","IIIB",6,57,139,57,82,57,"Metal De Transicion-Lantánido"},
cerio={"Cerio","Ce","IIIB",6,58,140,58,82,58,"Metal De Transicion-Lantánido"},
praseodimio={"Praseodimio","Pr","IIIB",6,59,141,59,82,59,"Metal De Transicion-Lantánido"},
neodimio={"Neodimio","Nd","IIIB",6,60,144,60,84,60,"Metal De Transicion-Lantánido"},     
prometio={"Prometio","Pm","IIIB",6,61,145,61,84,61,"Metal De Transicion-Lantánido"},
semario={"Samario","Sm","IIIB",6,62,150,62,88,62,"Metal De Transicion-Lantánido"},
europio={"Europio","Euv","IIIB",6,63,152,63,89,63,"Metal De Transicion-Lantánido"},
galodinio={"Gadolinio","Gd","IIIB",6,64,157,64,93,64,"Metal De Transicion-Lantánido"},
terbio={"Terbio","Tb","IIIB",6,65,159,65,94,65,"Metal De Transicion-Lantánido"},
disprosio={"Disprosio","Dy","IIIB",6,66,162,66,96,66,"Metal De Transicion-Lantánido"},
holmio={"Holmio","Ho","IIIB",6,67,165,67,98,67,"Metal De Transicion-Lantánido"},
erbio={"Erbio","Er","IIIB",6,68,167,68,99,68,"Metal De Transicion-Lantánido"},
tulio={"Tulio","Tm","IIIB",6,69,169,69,100,69,"Metal De Transicion-Lantánido"},
iterbio={"Iterbio","Yb","IIIB",6,70,173,70,103,70,"Metal De Transicion-Lantánido"},
lutecio={"Lutecio","Lu","IIIB",6,71,174,71,103,71,"Metal De Transicion-Lantánido"},
hafnio={"Hafnio","Hf","IVB",6,72,179,72,105,72,"Metal de Transicion"},
tantalio={"Tantalio","Ta","VB",6,73,181,73,108,73,"Metal de Transicion"},
wolframio={"Wolframio","W","VIB",6,74,183,74,109,74,"Metal de Transicion"},
renio={"Renio","Re","VIIB",6,75,186,75,111,75,"Metal de Transicion"},
osmio={"Osmio","Os","VIIIB",6,76,190,76,114,76,"Metal de Transicion"},
iridio={"Iridio","Ir","VIIIB",6,77,192,77,115,77,"Metal de Transicion"},
platino={"Platino","Pt","VIIIB",6,78,195,78,117,78,"Metal de Transicion"},
oro={"Oro","Au","IB",6,79,196,79,118,79,"Metal de Transicion"},
mercurio={"Mercurio","Hg","IIB",6,80,201,80,121,80,"Metal-liquido"},
talio={"Talio","Tl","IIIA",6,81,204,81,123,81,"Metal Del Bloque P"},
plomo={"Plomo","Pb","IVA",6,82,207,82,125,82,"Metal Del Bloque P"},
bismuto={"Bismuto","Bi","VA",6,83,208,83,125,83,"Metal Del Bloque P"},
polonio={"Polonio","Po","VIA",6,84,209,84,125,84,"Metaloide"},
astato={"Astato","At","VIIA",6,85,210,85,125,85,"No Metal"},
radon={"Radon","Rn","VIII",6,86,222,86,136,86,"Gases Nobles"},
francio={"Francio","Fr","I",7,87,223,87,136,87,"Metal-Alcalino"},
radio={"Radio","Ra","IIA",7,88,226,88,138,88,"Metal Alcalinotérreo"},
actinio={"Actinio","Ac","IIIB",7,89,227,89,138,89,"Metal de Transicion-Actínido"},
torio={"Torio","Th","IIIB",7,90,232,90,142,90,"Metal de Transicion-Actínido"},
protactinio={"Protactinio","Pa","IIIB",7,91,231,91,140,91,"Metal de Transicion-Actínido"},
uranio={"Uranio","U","IIIB",7,92,238,92,146,92,"Metal de Transicion-Actínido"},
neptunio={"Neptunio","Np","IIIB",7,93,237,93,144,93,"Metal de Transicion-Actínido"},
plutonio={"Plutonio","Pu","IIIB",7,94,244,94,150,94,"Metal de Transicion-Actínido"},
americio={"Americio","Am","IIIB",7,95,243,95,148,95,"Metal de Transicion-Actínido"},
curio={"Curio","Cm","IIIB",7,96,247,96,151,96,"Metal de Transicion-Actínido"},
berkelio={"Berkelio","Bk","IIIB",7,97,247,97,150,97,"Metal de Transicion-Actínido"},
californio={"Californio","Cf","IIIB",7,98,251,98,153,98,"Metal de Transicion-Actínido"},
einstenio={"Einstenio","Es","IIIB",7,99,252,99,153,99,"Metal de Transicion-Actínido"},
fermio={"Fermio","Fm","IIIB",7,100,257,100,157,100,"Metal de Transicion-Actínido"},
mendelevio={"Mendelevio","Md","IIIB",7,101,258,101,157,101,"Metal de Transicion-Actínido"},
nobelio={"Nobelio","No","IIIB",7,102,259,102,157,102,"Metal de Transicion-Actínido"},
laurencio={"Laurencio","Lr","IIIB",7,103,262,103,159,103,"Metal de Transicion-Actínido"},
rutherfordio={"Rutherfordio","Rf","IVB",7,104,261,104,157,104,"Metal De Transicion"},
dubnio={"Dubnio","Db","VB",7,105,262,105,157,105,"Metal De Transicion"},
seaborgio={"Seaborgio","Sg","VIB",7,106,	263,106,157,106,"Metal De Transicion"},
bohrio={"Bohrio","Bh","VIIB",7,107,262,107,155,107,"Metal De Transicion"},
hassio={"Hassio","Hs","VIIIB",7,108,265,108,157,108,"Metal De Transicion"},
meitnerio={"Meitnerio","Mt","VIIIB",7,109,266,109,157,109,"Metal De Transicion"},
darmstadtio={"Darmstadtio","Ds","VIIIB",7,110,271,110,161,110,"Metal De Transicion"},
roentgenio={"Roentgenio","Rg","IB",7,111,272,111,161,111,"Metal De Transicion"},
copernicio={"Copernicio","Cn","IIB",7,112,272,112,160,112,"Metal De Transicion"},
nihonio={"Nihonio","Nh","IIIA",7,113,283,113,170,113,"Metales Del Bloque P"},
flerovio={"Flerovio","Fl","IVA",7,114,285,114,171,114,"Metales Del Bloque P"},
moscovio={"Moscovio","Mc","VA"7,115,288,115,173,115,"Metales Del Bloque P"},
livermorio={"Liver morio","Lv","VIA"7,116,289,116,173,116,"Metales Del Bloque P"},
teneso={"Teneso","Ts","VIIA",7,117,291,117,174,117,"Desconocido"},
oganeson={"Oganeson","Og","VIIIA",7,118,293,118,175,118,"Desconocido"},
;




int main(){
	char x[25];
	printf("Digite un elemento: ");
	scanf("%i",&x);
	gets(x);
	ielem(x);
	printf("%s",x);
	
//	printf("Nombre Del Elemento: %s\nSimbolo: %s\nGrupo: %s\nPeriodo: %i\nNo.Atomico: %i\nMasa: %i\nProtones: %i\nNeutrones: %i\nElectrones: %i\nTipo De Elemento: %s",x.nombre,x.simbolo,x.grupo,x.periodo,x.noatomico,x.nomasa,x.protones,x.neutrones,x.electrones,x.tipoelem);
	
	return 0;
}
void ielem(){

printf("Nombre Del Elemento: %s\nSimbolo: %s\nGrupo: %s\nPeriodo: %i\nNo.Atomico: %i\nMasa: %i\nProtones: %i\nNeutrones: %i\nElectrones: %i\nTipo De Elemento: %s",x.nombre,x.simbolo,x.grupo,x.periodo,x.noatomico,x.nomasa,x.protones,x.neutrones,x.electrones,x.tipoelem);
	
}
