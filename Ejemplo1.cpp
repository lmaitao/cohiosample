#include <conio.h>
#include <string.h>

void dibujarCuadro(int,int,int,int);
 
void dibujarCuadro(int x1,int y1,int x2,int y2)
{
    int i;
    for (i=x1+1;i<x2;i++)
    {
        gotoxy(i,y1); cputs("-") ;//linea horizontal superior
        gotoxy(i,y2); cprintf("-") ;//linea horizontal inferior
    }
 
    for (i=y1+1;i<y2;i++)
    {
        gotoxy(x1,i); cprintf("|") ;//linea vertical izquierda
        gotoxy(x2,i); cprintf("|") ;//linea vertical derecha
    }
}
 
int main(int argc, char *argv[])
{
    int n;
    clrscr();//limpia TODA LA pantalla
 
    //crea una ventana COMPLETA de fondo azul claro
    window(1,1,80,25);
    textbackground(LIGHTBLUE);//fondo de la pantalla AZUL CLARO
    clrscr();
 
    //Ventana de fondo o sombra NEGRA
    window(4,4,79,24);//crea una ventana en estar cordenadas
    textbackground(BLACK);
    clrscr();
 
    //ventana principal donde se solicitan datos
    window(2,2,77,22);//crea una ventana en estar cordenadas
    textbackground(GREEN);//fondo de la pantalla verde
    textcolor(YELLOW);//color de la letra amarillo
    clrscr();
    dibujarCuadro(1,1,75,21);//Cuadro grande
    dibujarCuadro(3,3,73,5);//Cuadro titulo
    gotoxy(16,4);
    textcolor(WHITE);//establece el color de fondo en blanco
    cprintf("Programa Que Calcula El Duplo De Un Numero");
 
    gotoxy(3,7);cprintf("Digite un numero entero: ");scanf("%d",&n);
    gotoxy(3,9);cprintf("El duplo de %d es %d",n,2*n);
    gotoxy(3,18);cprintf("Presione cualquier tecla para terminar...");
    getch();
    clrscr();
    return 0;
}
