struct e1
{
    float x, y;
    int z[15];
};
e1 aux[100];

/* ---Costo en memoria---
CM(e1) = 2 + 15 = 17;
CM(aux) = 17 * 100 = 1700;


---Cardinalidad---

card(e1) = 2^2 * 2^15 = 2^17;
card(aux) = (2^17)^100 = 2^1700;

---Formula de acceso---

aux[i].x = dirbase + i * 1700;
aux[i].z[j] = dirbase + i * 1700 + 2 + j * 1;

*/