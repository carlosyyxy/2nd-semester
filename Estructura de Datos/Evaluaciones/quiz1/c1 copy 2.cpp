typedef struct XG {
    int Elemento[10];
};

typedef struct YG {
    int x, y;
    XG Milista;
};

typedef struct K {
    YG x;
    XG y;
}

K E[<CI>];

/*Calculo de costo de memoria de datos
CM(XG) = 1p * (9-0+1)
CM(XG) = 10p

CM(YG) = 1p + 1p + 10p
CM(YG) = 12p

CM(K) = 10p + 12p;
CM(K) = 22p

CM(E) = 22p * (29551024 - 0 + 1)
CM(E) = 650122550p

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