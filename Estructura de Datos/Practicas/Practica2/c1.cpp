typedef bool arr[10];
typedef arr mat[8];
mat aux;

/*---Costo en Memoria---

CM(arr) = 10;
CM(mat) = 10 * 8 = 80;
CM (aux = 80;

---Cardinalidad---

card(arr) = 2^10;
card(mat) = (2^10)^8;
card(aux) = 2^80

---Formula de acceso---

aux[i] = i * 8;
aux[i][j] =  dirbase+i* 8 + j;
