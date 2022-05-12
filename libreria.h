#define MAX 30							   //definizioni per il calcolo del determinante
int sub_row;
int sub_col;
int determinante; 
										  
int sr[MAX]={0};                           //definizioni per somma righe e somma colonne
int sn[MAX]={0};                           			   
float somma,sommadiagonale;				   //somma delle diagonali

int m[MAX][MAX];
int c;
int trasposta[MAX][MAX];
int r,n;

int prodotto[MAX][MAX];                    //prodotto tra matrici

int n_elementi_a={0};                      //operazioni vettori
int n_elementi_b={0};
int n_elementi=0;
int vettore[MAX];
int v_a[MAX]={0};
int v_b[MAX]={0};
int v_somma[MAX]={0};
int i=0;
float media={0};
float prodottoscalare=0;

int m1[MAX][MAX];						   //operazioni tra matrici
int m2[MAX][MAX];
int matricesomma[MAX][MAX];

int dimensione;
int dimensione1;
int dimensione2;
