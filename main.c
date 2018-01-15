#include <stdio.h>
#include <stdlib.h>
#include <CONIO2.h>
#include <string.h>
#include <time.h>



//verifica si se puede insertar una figura
int verificar(int ps, char tabla[10][10],int cx, int cy, char VH)
{
 int val;
 int i;
 
 if(ps<2)
 {
  if(VH=='H')
  {
   if(cx<9)
   {
   for(i=cx;i<cx+2;i++)
   {
    if(tabla[cy][i]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
    
    }
   }
   }
   else
   {
   
    for(i=cx;i>=cx-1;i--)
    {
     
    if(tabla[cy][i]!=' ')
    {
     
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
   
  }
  else
 {
  if(VH=='V')
  {
   if(cy<9)
   {
   for(i=cy;i<cy+2;i++)
   {
    if(tabla[i][cx]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
     
    }
   }
   }
   else
   {
    
    
    for(i=cy;i>=cy-1;i--)
    {
    if(tabla[i][cx]!=' ')
    {
 
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
 }
}
}///AQUI TERMINA EL IF PARA 2 BAQUITOS

 if(ps>=2&&ps<4)
 {
  if(VH=='H')
  {
   if((cx+2)<=9)
   {
   for(i=cx;i<cx+3;i++)
   {
    if(tabla[cy][i]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
    
    }
   }
   }
   else
   {
   
    for(i=cx;i>=cx-2;i--)
    {
     
    if(tabla[cy][i]!=' ')
    {
     
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
   
  }
  else
 {
  if(VH=='V')
  {
   if((cy+2)<=9)
   {
   for(i=cy;i<cy+3;i++)
   {
    if(tabla[i][cx]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
     
    }
   }
   }
   else
   {
    
    
    for(i=cy;i>=cy-2;i--)
    {
    if(tabla[i][cx]!=' ')
    {
 
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
 }
}
}
///AQUI TERMINE EL IF PARA 3 BARQUITOS
 if(ps==4)
 {
  if(VH=='H')
  {
   if((cx+3)<=9)
   {
   for(i=cx;i<cx+4;i++)
   {
    if(tabla[cy][i]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
    
    }
   }
   }
   else
   {
   
    for(i=cx;i>=cx-3;i--)
    {
     
    if(tabla[cy][i]!=' ')
    {
     
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
   
  }
  else
 {
  if(VH=='V')
  {
   if((cy+3)<=9)
   {
   for(i=cy;i<cy+4;i++)
   {
    if(tabla[i][cx]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
     
    }
   }
   }
   else
   {
    
    
    for(i=cy;i>=cy-3;i--)
    {
    if(tabla[i][cx]!=' ')
    {
 
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
 }
}
}//AQUI TERMINA EL IF PARA 4 BARQUITOS
 if(ps==5)
 {
  if(VH=='H')
  {
   if((cx+4)<=9)
   {
   for(i=cx;i<cx+5;i++)
   {
    if(tabla[cy][i]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
    
    }
   }
   }
   else
   {
   
    for(i=cx;i>=cx-4;i--)
    {
     
    if(tabla[cy][i]!=' ')
    {
     
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
   
  }
  else
 {
  if(VH=='V')
  {
   if((cy+4)<=9)
   {
   for(i=cy;i<cy+5;i++)
   {
    if(tabla[i][cx]!=' ')
    {
     return 0;
    }
    else
    { 
     val=1;
     
    }
   }
   }
   else
   {
    
    
    for(i=cy;i>=cy-4;i--)
    {
    if(tabla[i][cx]!=' ')
    {
 
     return 0;
    }
    else
    { 
     val=1;
     
    }
    }
   }
 }
}
}
 
 
 
 return val;
}

//devuelve el entero de las coordenas  A a J
int cooAJ(char com[9])
{
 int cm;
 
 cm=toupper(com[0])-65;
 
 return cm;
}

//devuelve el entero de las coordenadas 1 a 10
int coo10(char com[9])
{
 int cm;
 
 if(strlen(com)>3)
 {
   cm=9;
 }
 else
 {
  cm=com[1]-49;
 }
 return cm;
}
//devuelve la coordenada 1 a 10 de ataque
int coo102(char com[9])
{
 int cm;
 
 if(strlen(com)>2)
 {
   cm=9;
 }
 else
 {
  cm=com[1]-49;
 }
 return cm;
}


//regresa el caracter de V o H segun la orientacion
char VOH(char com[9])
{
 char cm;
 
 if(strlen(com)>3)
 {
   cm=com[3];
 }
 else
 {
  cm=com[2];
 }
 
 return toupper(cm);
}

//funcion de comando de ataque a una coordenada devuelve 1 si el comando es aceptado, 0 si es incorrecto
int comandoataque(char com[9])
{
 
int val;
 char carac; 

 if(strlen(com)==3||strlen(com)==2)
 {
  carac=toupper(com[0]);
  if(carac=='A'||carac=='B'||carac=='C'||carac=='D'||carac=='E'||carac=='F'||carac=='G'||carac=='H'||carac=='I'||carac=='J')
  {
   carac=com[1];
   if(com[1]=='1'&&(strlen(com)>2))
   {
     carac=toupper(com[2]);
     if(carac=='0')
     {
       val=1;
     }
     else
     {
      val=0;
     }
   }
   else
   {
    carac=com[1];
      if(carac=='1'||carac=='2'||carac=='3'||carac=='4'||carac=='5'||carac=='6'||carac=='7'||carac=='8'||carac=='9')
      {
       val=1;
      }
      else
      {
       val=0;
      }
   }
   
   }
  else
  {
   val=0;
  }
  
 }
 else
 {
  val=0;
 }
  
 
 
 
 return val;
}


//funcion de comando de llanado devuelve un 1 si la coordenada de llenado
//es correcta junto con la orientacion horizontal o vertical, 0 si el comando es incorrecto
//ejemplo A10V  QUIERE DECIR COORDENADA A1O EN POSICION VERTICAL PUEDEN USARSE MAYUSCULAS O MINUSCULAS O COMBINADO (A10v)
int comandollenado(char com[9])
{
 int val;
 char carac; 

 if(strlen(com)==4||strlen(com)==3)
 {
  carac=toupper(com[0]);
  if(carac=='A'||carac=='B'||carac=='C'||carac=='D'||carac=='E'||carac=='F'||carac=='G'||carac=='H'||carac=='I'||carac=='J')
  {
   carac=com[1];
   if(com[1]=='1')
   {
     carac=toupper(com[2]);
     if(carac=='0'||carac=='V'||carac=='H')
     {
       if(carac=='V'||carac=='H')
       {
        val=1;
        return val;
       }
       carac=toupper(com[3]);
       if(carac=='V'||carac=='H')
       {
        val=1;
       }
       else
       {
        val=0;
        }
     }
     else
     {
      carac=com[1];
      if(carac=='2'||carac=='3'||carac=='4'||carac=='5'||carac=='6'||carac=='7'||carac=='8'||carac=='9')
      {
       carac=toupper(com[2]);
       if(carac=='V'||carac=='H')
       {
        val=1;
       }
       else
       {
        val=0;
        }
      }
      else
      {
       val=0;
      }
     }
   }
   else
   {
     carac=com[1];
      if(carac=='2'||carac=='3'||carac=='4'||carac=='5'||carac=='6'||carac=='7'||carac=='8'||carac=='9')
      {
       carac=toupper(com[2]);
       if(carac=='V'||carac=='H')
       {
        val=1;
       }
       else
       {
        val=0;
        }
      }
      else
      {
       val=0;
      }
   }
   
   }
  else
  {
   val=0;
  }
  
 }
 else
 {
  val=0;
 }
  
 
 
 
 return val;
}

//esta funcion imprime un tablero segun sea la tabla del usuario o IA se le mande por parametro
void tablero(char tabla[10][10])
{
   int i,j;
   textcolor(WHITE);
  
   printf("\n\n");
   printf("  | 1 | 2 | 3 | 4 | 5 | 6 | 7 | 8 | 9 | 10|\n");
   for(i=0;i<10;i++)
   {
     printf(" -|---|---|---|---|---|---|---|---|---|---|\n");
    for(j=0;j<10;j++)
    {
     if(j==0)
     {
     printf(" %c",'A'+i);
     }
     //printf("| c ");
      if(tabla[i][j]=='*')
      {
       printf("| ");
      textcolor(YELLOW);
      printf("%c ",tabla[i][j]);
      textcolor(WHITE);
   
      }
      else
      {
        if(tabla[i][j]=='+')
        {
         printf("| ");
         textcolor(RED);
         printf("%c ",tabla[i][j]);
         textcolor(WHITE);
        }
        else
        {
        printf("| %c ",tabla[i][j]);
        }
      }
    }
    
    printf("|\n");
   }
   
   printf(" -|---|---|---|---|---|---|---|---|---|---|\n");
   
    
}

int main(int argc, char *argv[])
{
  char tablaia[10][10]={"          ","          ","          ","          ","          ","          ","          ","          ","          ","          "}; //tablero de IA
  char tablayo[10][10]={"          ","          ","          ","          ","          ","          ","          ","          ","          ","          "}; //mi tablero
  char tablaux[10][10]={"          ","          ","          ","          ","          ","          ","          ","          ","          ","          "}; //mi tablero
   
  char com[9], vhia;
 // char piezas[4][5]={"**","***","****","*****"};//piezas de longuitud de 2 a 5, 4 tipos de piezas
  int i,j,k,contador;
  int err;
  int xcia,ycia,conia,conyo;
  system("color 19");
  textcolor(WHITE);
  textbackground(BLUE);
  srand(time(NULL));
  printf("    BATTLESHIP\n");
  printf("Hola que tal bienvenido a una nueva guerra naval...\n");
  printf("Lo primero que haremos es llenar tu tablero con algunos buques,\n");
  printf("hay disponibles buques de 2,3,4 y 5  casillas, y cuentas con la\n");
  printf("cantidad de;\n");
  printf("* 2 buques ligeros(2casillas)\n* 2 buques medianos(3 casillas)\n* 1 buque de pesado(4 casilla)\n* 1 buque de artilleria(5 casillas)");
  printf("\n\nPara llenar las casillas sigue las siguientes instrucciones:\n");
  printf("Lo primero que debes saber es que la posicion de los buques se ordenan\n");
  printf("de izquierda a derecha (HORIZONTAL) y de arriba a abajo    (VERTICAL)\n");
  printf("en caso de que el buque fuera demasiado largo para colocarlo en alguno\n");
  printf("de esos sentidos el juego lo colocara en sentido inverso es decir\n");
  printf("de derecha a izquierda(HORIZONTAL) y de abajo hacia arriba  (VERTICAL)\n\n");
  printf("Tomando eso en cuenta solo basta colocar la coordenada y el sentido para\n");
  printf("posicionar el  buque, el tablero consta de 1 a 10 posiciones en HORIZONTAl\n");
  printf("y de A hasta J posiciones en VERTICAL.Para llenar el tablero escribe el \n");
  printf("comando de llenado por ejemplo: A5V (esto quiere decir que colocara un buque\n");
  printf("en VERTICAL desde la coordenada A5, si quisiera colocarlo de manera HORIZONTAL\n");
  printf("solo sustituye la V por H o viceversa puedes usar mayusculas o minusculas.\n");
  printf("Bien... ahora si empezemos a llenar tu tablero... y despues la Guerra...\n");
  
  
  //printf("%d",'1'-48);
  getch();
  system("cls");
  printf(" TU TABLERO");
  tablero(tablayo);
   //A ES ASCII ES IGUALA A 65
  
  for(k=0;k<6;k++)
  {
  
   if(k<2)
   {
    contador=2;
   }
   if(k>=2&&k<4)
   {
    contador=3;
   }
    if(k==4)
    {
     contador=4;
    }
    if(k==5)
    {
     contador=5;
     }
  do
  {  
    
    printf("DIGITA LA COORDENADA DEL BARCO(%d CASILLAS)Y LA ORIENTACION EJEMPLO (A10V): ",contador);
    scanf("%s",&com);
    if(!comandollenado(com))
    {
     system("cls");
     printf(" TU TABLERO");
     tablero(tablayo);
     printf("Comando Incorrecto\n");
    }
  }while(!comandollenado(com));
  
 
 
  if(verificar(k,tablayo,coo10(com),cooAJ(com),VOH(com))==0)
  {
   system("cls");
   printf(" TU TABLERO");
   tablero(tablayo);
   printf("COLISION SELECCIONE OTRO PUNTO U OTRA POSICION");
   k=k-1;
  }
  else
  {
   system("cls");
  
    
   
   
   if(VOH(com)=='H')
   {
    if((contador+coo10(com)-1)<=9) 
    {
      for(i=0;i<contador;i++)
      {
     
      tablayo[cooAJ(com)][coo10(com)+i]='*';
      }
   
    }
    else
    {
      
      for(i=0;i<contador;i++)
      {
     
      tablayo[cooAJ(com)][coo10(com)-i]='*';
      }
    }
   }
   else
   {
     if((contador+cooAJ(com)-1)<=9)
     {
      for(i=0;i<contador;i++)
      {
     
       tablayo[cooAJ(com)+i][coo10(com)]='*';
      }
     }
     else
     {
      for(i=0;i<contador;i++)
      {
     
       tablayo[cooAJ(com)-i][coo10(com)]='*';
      }
     }
   }
    
    } 
   printf(" TU TABLERO");
   tablero(tablayo);
   
  
   
 
  }//termina el for de 6
  
 
 //aqui llenamos la tabla de la IA
 for(k=0;k<6;k++)
  {
   xcia=rand()%10;
   ycia=rand()%10;
   if((rand()%4)==1||(rand()%4)==3)
   {vhia='V';}
   else{vhia='H';}
    if(verificar(k,tablaia,xcia,ycia,vhia)==0)
  {
   k=k-1;
   
   
  }
  else
  {
   
   if(k<2)
   {
    contador=2;
   }
   if(k>=2&&k<4)
   {
    contador=3;
   }
    if(k==4)
    {
     contador=4;
    }
    if(k==5)
    {
     contador=5;
     }
    
   
   
   if(vhia=='H')
   {
    if((contador+xcia-1)<=9) 
    {
      for(i=0;i<contador;i++)
      {
     
      tablaia[ycia][xcia+i]='*';
      }
   
    }
    else
    {
      
      for(i=0;i<contador;i++)
      {
     
      tablaia[ycia][xcia-i]='*';
      }
    }
   }
   else
   {
     if((contador+ycia-1)<=9)
     {
      for(i=0;i<contador;i++)
      {
     
       tablaia[ycia+i][xcia]='*';
      }
     }
     else
     {
      for(i=0;i<contador;i++)
      {
     
       tablaia[ycia-i][xcia]='*';
      }
     }
   }
    
    } 

   } 
   printf("Excelente ya has llenado tu tablero, AHORA LA BATALLA..\n");
   getch();
 //AQUI TERMINAMOS DE LLENAR LA TABLA IA
   system("cls");
    printf("Antes de empezar una breve explicacion de comandos\n");
    printf("digita el vector de una letra y enseguida el de los numero\n");
    printf("ese sera el comando para atacar en un punto, ejemplo:\n");
    printf("A5 .... este comando se usa para atacar la coordenada A5\n");
    printf("puedes usar mayusculas o minusculas (a5) o (A5).\n");
    printf("podras obervar lo siguiente en los tableros:\n");
    printf("( ");textcolor(YELLOW);printf("*");textcolor(WHITE);printf(" )coordenada de un barco(aparece en el tablero si aciertas)\n");
    printf("( O )coordenada fallida o vacio\n");
    printf("( ");textcolor(RED);printf("+");textcolor(WHITE);printf(" )coordenada de un barco aliado da%cado(el enemigo ha acertado)\n",164);
    printf("\n           %c%c%cMUCHA SUERTE%c%c%c\n",173,173,173,33,33,33);
    getch();
    system("cls");
    conia=0;
    conyo=0;
   
    do
    {
     system("cls");
     printf(" CAPITAN MOORGAN AL ATAQUE");
     tablero(tablayo);
     printf(" TABLERO ENEMIGO ");
     tablero(tablaux);
    do
    {
    
    printf("DIGITA TU COMANDO DE ATAQUE: ");
    scanf("%s",com);
    err=0;
    if(comandoataque(com)==0)
    {
     printf("COMANDO ERRONEO..");
    }
    else
    {
     if(tablaia[cooAJ(com)][coo102(com)]!='*'&&tablaux[cooAJ(com)][coo102(com)]==' ')
     {
      tablaux[cooAJ(com)][coo102(com)]='O';
     }
     else
     {
       if(tablaia[cooAJ(com)][coo102(com)]!=' '&&tablaux[cooAJ(com)][coo102(com)]==' ')
       {
       tablaux[cooAJ(com)][coo102(com)]='*';
       conyo++;
       }
       else
       {
        if(tablaux[cooAJ(com)][coo102(com)]=='O'||tablaux[cooAJ(com)][coo102(com)]=='*')
        {
        err=1;
        }
       }
     }
     
    }
    
    if(err==1)
    {
     system("cls");
     printf(" CAPITAN MOORGAN AL ATAQUE");
     tablero(tablayo);
     printf(" TABLERO ENEMIGO ");
     tablero(tablaux);
     printf("casilla ocupada..");
     
    }
     
     if(conyo==19)
     {
      system("cls");
     printf(" CAPITAN MOORGAN AL ATAQUE ");
     tablero(tablayo);
     printf(" TABLERO ENEMIGO ");
     tablero(tablaux);
     
      printf("\nFELICIDADES HAS GANADO....\n");
      break;
     }
  
    
    }while(comandoataque(com)!=0&&err!=0);
    if(conyo==19)
     {
     
      break;
     }
     //TURNO DE LA IA
    do
    {
    xcia=rand()%10;
    ycia=rand()%10;
    err=0;
     if(tablayo[ycia][xcia]=='*')
     {
      tablayo[ycia][xcia]='+';
      conia++;
     }
     else
     {
       if(tablayo[ycia][xcia]==' ')
       {
       tablayo[ycia][xcia]='O';
       }
       else
       {
        if(tablayo[ycia][xcia]=='O'||tablayo[ycia][xcia]=='+')
        {
        err=1;
        }
       }
     }
        
     if(conia==19)
     {
     system("cls");
     printf(" CAPITAN MOORGAN AL ATAQUE ");
     tablero(tablayo);
     printf(" TABLERO ENEMIGO ");
     tablero(tablaux);
     
      printf("\nLO SENTIMOS HAS PERDIDO....\n");
      break;
     }
  
    
    }while(err!=0);
    //FIN DE TURNO DE LA IA
     if(conia==19)
     {
      break;
     }
    
    }while(1);
   
    
    
 //tablero(tablayo);
 //tablero(tablaia);
    
  getch();	
  return 0;
}
