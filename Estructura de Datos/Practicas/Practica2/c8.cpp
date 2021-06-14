struct punto3D
{
    float x, y, z;
};
struct modelo3D
{
    string nombre, formato;
    punto3D vertices[250], normales[250];
    bool visible;
};
struct escena3D
{
    string nombre;
    modelo3D modelos[20];
};
escena3D mapa3D[25];

/* ---Costo en memoria---

CM(punto3D) = 3;
CM(modelo3D) = mp + np + 1501;
CM(escena3D) = op + (mp + np + 1501) * 20;
CM(escena3D) = 30020 + 20mp + 20np + op;
CM(mapa3D) = (30020 + 20mp + 20np + op) * 25
CM(mapa3d) = 750500 + 500mp + 500np + 25op */

/* ---Cardinalidad---

card(punto3D) = 2^3;
card(modelo3d) = 2^mp * 2^np * 2^750 * 2^750 * 2 = 2^mp * 2^no * 1501
card(escena3d) = 2^op + (2^np * 2^mp* 2^1501)^20;
card(escena3d) = 2^op + ((2^np)^20) * (2^mp)^20 * 2^30020)
card(mapa3d) = (2^op * ((2^np)^20) * (2^mp)^20 * 2^30020)) ^ 25
card(mapa3d) = (2^op)^25 * ((2^np)^500) * ((2^mp)^500) * 2^750500 */

/* ---Formula de acceso---

mapa3D[i].modelos[j].vertices[k].x = 

dirbase + (i* (30020 + 20mp + 20np + op)) + op + (j * (mp + np + 1501) + (k * 3))





*/