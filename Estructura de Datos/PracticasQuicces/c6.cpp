/*13. Haga la traza del siguiente algoritmo y explique qué sucede en cada instrucción.
1 void main() {
2 int i, j, n, *arr, **mat;
3 read(n); 
4 arr = new int[n];
5 mat = new int*[n];
6 for (i = 0; i < n; i++){
7 arr[i] = i;
8 mat[i] = new int[n];
9 for(j = 0; j < n; j++)
10      mat[i][j] = i + j;
11 }
12 i = n - 1;
13 while (i >= 0){
14 print(arr[i]);
15 delete mat[i];
16 i--;
17 }
18 delete arr;
19 delete mat; // ¿a quién apunta arr? ¿podría acceder arr[0]?
20 }

*/