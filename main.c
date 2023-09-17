//1
// #include <stdio.h>
// #include <math.h>
// double volume_cilindro(double altura, double raio) {
//     double volume = M_PI * raio * raio * altura;
//     return volume;
// }
// int main(void) {
//   double altura;
//   double raio;
//   printf("informe a altura");
//   scanf("%lf",&altura);
//   printf("informe o raio");
//   scanf("%lf",&raio);
//   double resultado = volume_cilindro(altura, raio);
//     printf("O volume do cilindro é: %lf\n", resultado);
//   return 0;
// }
//2
// #include <stdio.h>
// #include <stdlib.h>
// int calculokml(int dist_km,int quantlitros){
//   int kml= dist_km/quantlitros;
//   return kml;
// }
// int main (void){
//   int dist_km;
//   int quantlitros;
//   printf("Informe a distancia em Km ");
//   scanf("%d",&dist_km);
//   printf("Informe a quantidade de litros ");
//   scanf("%d",&quantlitros);

//   int resultado =calculokml(dist_km,  quantlitros);
//   printf("A distancia por kmpor litro é de : %d",resultado);
//   if (resultado<8){
//     printf(" Venda o carro!");
//   }else if (resultado>8 ||resultado <14){
//     printf(" Ecônomico");
//   }else{
//     printf(" Super Econômico");
//   }
//   return 0;
// }
//3
// #include <stdlib.h>
// #include <stdio.h>
// int somaaeb(int *A , int B){
//   *A=*A+B;
// }
// int main (void){
//   int A;
//   int B;
//   printf("Informe o valor de A ");
//   scanf("%d",&A);
//   printf("Informe o valor de B ");
//   scanf("%d",&B);
//   somaaeb (&A,B);
//   printf("O valor de A após a soma é: %d\n", A);
//     printf("O valor de B é: %d\n", B);
// }
//4
// #include <stdio.h>
// int calcularSequencia(int n) {
//     if (n == 1) {
//         return 1;
//     } else if (n == 2) {
//         return 2;
//     } else {
//         return 2 * calcularSequencia(n - 1) + 3 * calcularSequencia(n - 2);
//     }
// }
// int main() {
//     int n;
//     printf("Digite o valor de n para calcular a sequência F: ");
//     scanf("%d", &n);
//     if (n < 1) {
//         printf("O valor de n deve ser pelo menos 1.\n");
//     } else {
//         int resultado = calcularSequencia(n);
//         printf("O valor da sequência F para n = %d é: %d\n", n, resultado);
//     }
//     return 0;
// }
//5
// #include <stdio.h>
// int calcularPell(int n) {
//     if (n == 0) {
//         return 0;
//     } else if (n == 1) {
//         return 1;
//     } else {
//         return 2 * calcularPell(n - 1) + calcularPell(n - 2);
//     }
// }
// int main() {
//     int n;
//     printf("Digite o valor de n para calcular o número de Pell: ");
//     scanf("%d", &n);

//     if (n < 0) {
//         printf("O valor de n deve ser não negativo.\n");
//     } else {
//         int resultado = calcularPell(n);
//         printf("O número de Pell para n = %d é: %d\n", n, resultado);
//     }
//     return 0;
// }

