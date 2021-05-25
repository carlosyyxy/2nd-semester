struct persona
{
    char nombre[50], direccionTrabajo[100], rif[15];
    bool estadoCivil, sexo;
    int edad, ci;
};
typedef persona juntaCondominio[10];
struct edificio
{
    char nombre[50], direccion[101];
    int cantidadApartamentos;
    juntaCondominio junta;
};
edificio avenida[25];

/* ---Costo en memoria---

CM(persona) = 50 + 100 + 15 + 2 + 2 = 169;
CM(juntaCondominio) = 169 * 10 = 1690;
CM(edificio) = 50 + 101 + 1 + 1690 = 1842
CM(avenida) = 1842 * 25 = 46050

---Cardinalidad---

card(persona) = 2^50 * 2^100 * 2^15 * 2^4 = 2 ^ 169;
card(juntaCondominio) = (2^169)^10 = 2^1690
card(edificio) = 2^50 * 2^101 * 2 * 2^1690 = 2^1842;
card(avenida) = (2^1842)^25 = 2^46050

---Formula de acceso---

avenida[i].junta[j].estadoCivil= dirbase + i * 1842 + 50 + 101 + 1 + j * 1690 + 500 + 1000 + 150=
                               = dirbase + (i * 1842) 152 + (j*1690) + 1650



*/