/* Se desea que efectúe lo siguiente :


    Para las siguientes fórmulas de acceso,
    si son correctas calcúlelas de la forma más simplificada posible, y si son erróneas, indique el por qué :

    Data[i].W[j].X[k] .R[l];
Data[i].W[j].Y[k].B;
Data[i].W[j].m[k];
Data[i].W[j].c;*/
typedef struct AYED {
    bool A;
    char *B;
    int R[100];
} typedef struct PR {
    AYED X[110];
    AYED Y[120];
    AYED Z[130];
} typedef struct VZ {
    bool b;
    PR W[20];
    switch (b) {
    case true:
        int a, b, c;
        break;
    case false:
        int m[10];
        break;
    }
} typedef VZ K[50];
K Data;

/*Calcule el costo en memoria de la variable Data.
CM(AYED) = 1 + 1 + 1 *(99-0+1)
CM(AYED) = 2 + 100
CM(AYED) = 102p

CM(PR) = 102  * (109-0+1) + 102 * (119 - 0 + 1) + 102 * (129-0+1)
CM(PR) = 11220 + 12240 + 13260
CM(PR) = 36720p

CM(VZ) = 1p + 36720p * (19-0+1) + 1p + 1 * (9-0+1)
CM(VZ) = 1p + 734400 + 1p + 10p
CM(VZ) = 734412p

CM(K) = 734412p * (49-0+1)
CM(K) = 36720000p

CM(Data) = 36720000p*/

/*
Data[i].W[j].X[k].R[l] = dirbase + i * (734412) + 1 + j * (36720) + k * (102) + 1 + 1 + r * (100)
Data[i].W[j].Y[k].B; = dirbase + i * (734412) + 1 + j * (36720) + k * (102) + 1 
Data[i].W[j].m[k]; = Es erroneo porque Dentro de W[j] no se encuentra ningun elemento m[k] y no se puede acceder a este
Data[i].W[j].c; = Es erroneo  porque Dentro de W[j] no se encuentra ningun elemento c y no se puede acceder a este
*/

/* */