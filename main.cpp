#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void punto_1();
void punto_2();
void punto_3();
void punto_4();
void punto_5();
void punto_6();

//1. Ciclo While
//a) Sumar los números del 1 al 100

int main(){
    int opcionMenu = 0;
    do{
        printf("\n| 1. CICLO WHILE  | 2. CICLO FOR  |");
        printf("\n| 3. ARRAY   | 4. CICLO SWITCH  |");
        printf("\n| 5. MATRICES  | 6. ESTRUCTURA  |");
        printf("\n|             | 0. CERRAR   |");
        printf("\n\nESCOJA UNA OPCION: ");
        scanf("%d", &opcionMenu);
        switch(opcionMenu){
            case 1:
                system("cls");
                punto_1();
                break;
            case 2:
                system("cls");
                punto_2();
                break;
             case 3:
                system("cls");
                punto_3();
                break;
             case 4:
                system("cls");
                punto_4();
                break;
             case 5:
                system("cls");
                punto_5();
                break;
             case 6:
                system("cls");
                punto_6();
                break;
            case 0:
                system("cls");
                printf("\n       PROGRAMA FINALIZADO CON EXITO \n");
                exit(0);
                break;
            default:
               system("cls");
               printf("\n          LA OPCION NO ES VALIDA \n");
        }
    }while(opcionMenu != 0);
    return 0;
}

void punto_1(){
    int a = 1, p = 0, num;
    while(a <= 100){
        p = a + p;
        a = a + 1;
    }
    printf("La suma de los 100 primeros números es %d",p);
}

//2. Ciclo For
//a) Imprimir las tablas de multiplicar de un número del 1 al 20

void punto_2() {
    int a, p = 0, n;
    printf("Ingrese el numero a multiplicar\n");
    scanf("%d",&a);
    for(n=0;n<=20;n++){
        printf("%d * %d = %d",a, n, n*a);
        printf("\n");
    }
}

//3. Array
//b)

void punto_3(){
    int n1, n2;
printf("Ingrese num de filas\n");
scanf("%d",&n1);
int array[n1];
printf("Ingrese num de columnas\n");
scanf("%d",&n2);
srand(time(NULL));
for(int i=0;i<n1;i++){
for(int j=0;j<n2;j++){
            array[j] = rand()%(2);
            printf("%d ",array[j]);
}
printf("\n");
}
}

//4. Ciclo Switch
//b)

void punto_4() {
    char vocal;
    printf( "Ingrese una vocal\n" );
    scanf( "%s", &vocal );
    switch ( vocal ){
        case 'a' : printf( "El codigo ASCII de la vocal %s es 97\n", &vocal );
        break;
        case 'e' : printf( "El codigo ASCII de la vocal %s es 101\n", &vocal );
        break;
        case 'i' : printf( "El codigo ASCII de la vocal %s es 105\n", &vocal );
        break;
        case 'o' : printf( "El codigo ASCII de la vocal %s es 111\n", &vocal);
        break;
        case 'u' : printf( "El codigo ASCII de la vocal %s es 117\n", &vocal );
        break;
        case 'A' : printf( "El codigo ASCII de la vocal %s es 65\n", &vocal );
        break;
        case 'E' : printf( "El codigo ASCII de la vocal %s es 69\n", &vocal );
        break;
        case 'I' : printf( "El codigo ASCII de la vocal %s es 73\n", &vocal );
        break;
        case 'O' : printf( "El codigo ASCII de la vocal %s es 79\n", &vocal );
        break;
        case 'U' : printf( "El codigo ASCII de la vocal %s es 85\n", &vocal );
        break;
        default : printf( "\n   ERROR: No es una vocal." );
    }
}

//5. Matrices
//b)

void punto_5(){
    int matriz[3][3], i, j, num;
srand (time(NULL));
for(i=0;i<3;i++){
for(j=0;j<3;j++){
matriz[i][j]= rand()%(100);
printf("%d ", matriz[i][j]);
}
printf("\n");
}
}

//6. Estructuras
//b)

struct competidor{
    char nombre[30], sexo[4], club[30];
    int edad;
}competidor;

void punto_6(){
    printf("Ingrese nombre\n");
    fflush(stdin);
    gets(competidor.nombre);
    printf("Ingrese edad\n");
    scanf("%i",&competidor.edad);
    if(competidor.edad='char'){
     system("cls");
     printf("Por favor ingresar la edad en numeros!\n");
     printf("\n");
     punto_6();
    }
    printf("Ingrese sexo (M/F)\n");
    fflush(stdin);
    gets(competidor.sexo);
    printf("Ingrese club\n");
    fflush(stdin);
    gets(competidor.club);
    printf("\n\n\n");
    printf("%s\n",competidor.nombre);
    printf("%i\n",competidor.edad);
    printf("%s\n",competidor.sexo);
    printf("%s\n",competidor.club);
if(competidor.edad<='15'){
         printf("Categoria INFANTIL\n");
         if((competidor.edad>'15') && (competidor.edad<='30')){
             printf("Categoria JOVEN\n");
             if(competidor.edad>'30'){
                 printf("Categoria MAYOR\n");
             }
         }
     }

}

