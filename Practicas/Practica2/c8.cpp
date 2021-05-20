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