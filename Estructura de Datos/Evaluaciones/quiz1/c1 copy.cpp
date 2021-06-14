typedef struct AYED {
    int AM;
    bool ABD;
    char Especial;
    int Info[8]
}

typedef struct AAA {
    float Z;
    int X;
    AYED Au[4];
}

typedef struct grande {
    bool Adicional;
    AAA X[4];
}

typedef grande JC[10];

JC Datos;

/*Calculo de costo de memoria de datos
CM(AYED) = 1p + 1p + 1p + (1p * (7-0+1)) 
CM(AYED) = 3p + 8p
CM(AYED) = 11p

CM(AAA) = 1p + 1p + (11p * (3-0+1))
CM(AAA) = 1p + 1p + 44p
CM(AAA) = 46p

CM(grande) = 1p + (46p * (3-0+1))
CM(grande) = 1p + 184p
CM(grande) = 185p

CM(JC) = 185p * (9-0+1)
CM(JC) = 1850p

CM(Datos) = 1850p

*/


/*Cardinalidad.


card(AYED) = 2 * 2 * 2 * 2^8
card(AYED) = 2^11

card(AAA) = 2 * 2 * (2^11)^4
card(AAA) = 2^2 * 2^44
card(AAA) = 2^46

card(grande) = 2 * (2^46)^4
card(grande) = 2 * 2^184
card(grande) = 2^185 

card(JC) = (2^185)^10
card(JC) = 2^1850


*/

/*Formulas de Acceso:  
Datos[i].X[j].Au[k].Info[10] = Esta no se puede realizar porque el arreglo Info tiene 8 posiciones y daría error al intentar acceder a una posición mayor.
Datos[i].X[j].Au[k].Info[2] = dirBase + (i * 1850p) + 1p + (j * 46p) + 1p + 1p + (k * 11p) + 1p + 1p + 1p + (2 * 1p);
Datos[i].X[j].X = dirBase + (i * 1850p) + 1p + (j * 46p) + 1p


*/