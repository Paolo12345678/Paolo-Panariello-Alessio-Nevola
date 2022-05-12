#include <iostream>
using namespace std;


int det(int m[MAX][MAX], int car){								 // Calcolo del determinante
    if (car == 1){
		determinante = m[0][0];                                  	 // Valuto il caso di cardinalità pari ad uno
	}		
    
    
   	else{if (car == 2){                                          	// Valuto il caso di cardinalità pari a due
        determinante = m[1][1]*m[0][0]-m[0][1]*m[1][0];
			}
        
        
    	else {                                                   	// Valuto il caso di cardinalità > 2 riducendo la matrice ad una 2x2
       		for (int row = 0; row < car; row++) {
            	int sub_m[MAX][MAX];
            	
           		
           		for (int i = 0; i < car-1; i++) {
                	for (int j = 0; j < car-1; j++) {
                   		sub_row = (i < row ? i : i+1);
                   		sub_col = j+1;
                    	sub_m[i][j] = m[sub_row][sub_col];	
					}   	
                }
            
            
            if (row % 2 == 0){										// Valuto il segno della sottomatrice ricordando che
             determinante+= m[row][0]*det(sub_m, car-1);         	// vale + per gli elementi pari e - per i dispari
			}
			else{
            determinante-= m[row][0]*det(sub_m, car-1);
			}
			 
  
        	}
    	}
    return determinante;
	}
}






int valmat(int m[MAX][MAX]){												  //assegnazione valori alla matrice
	for(int i=0; i<r; i++){
		for(int j=0; j<n; j++){
			cout<<"inserire un valore ["<<i<<"]"<<"["<<j<<"]"<<endl;            
			cin>>m[i][j];
		}
	}
}






void stampmat(int m[MAX][MAX]){													 //stampa matrice inserita
cout<<"la matrice e' ["<<r<<"]["<<n<<"]"<<endl;
	for(int i=0; i<r; i++){
		for(int j=0; j<n; j++){
			cout<<m[i][j]<<"\t";                                                 
		}
			cout<<endl;
	}
}





int sommarig(int sm[MAX], int m[MAX][MAX]){										 //operazione di somma righe
	for(int i=0; i<r; i++){
		for(int j=0; j<n; j++){                                                  
				sm[i]=sm[i]+m[i][j];
		}
	}
}





int sommacol(int sn[MAX], int m[MAX][MAX]){										 //operazione di somma colonne//
	for(int j=0; j<n; j++){
		for(int i=0; i<r; i++){                                                   
			sn[j]=sn[j]+m[i][j];
		}
	}
}





int sommadiag(int m[MAX][MAX]){									                 //somma delle diagonali
	if(r=n){                                                             	     //verifico se la matrice e' quadrata
		for (int i=0; i<r; i++){
			for(int j=0; j<n; j++){
				if(i=j){
			        somma=somma+m[i][j];  
				}             		                   
			}
		}
	sommadiagonale=somma+m[0][0];
	}
	else{
		cout<<"la matrice non e' quadrata"<<endl;
	}
}
			        
			        
			        


int mattrasp(int trasposta [MAX][MAX]){										     //calcolo della matrice trasposta
	for (int i=0; i<r; i++){													   
		for(int j=0; j<n; j++){
			trasposta[j][i] = m[i][j];
		}
	}
}
				
		
								
				
				
int calcola_prodotto(int m1[MAX][MAX],int m2[MAX][MAX]){					     //calcolo e stampa prodotto tra matrici 
	int k=0;
	for(int i=0; i<r; i++){
		for(int j=0; j<n; j++){
			
			for(int k=0; k<r; k++){											     //ho bloccato la riga della prima matrice e la colonna della seconda
			prodotto[i][j] += m1[i][k] * m2[k][j];							  
			}
			
		}
	}

cout << "La matrice prodotto delle due e': " <<endl;
	for (int i=0; i<r; i++){										          
		for(int j=0; j<n; j++){												   
			cout<< prodotto[i][j] << "\t";                                    
		}
	cout<<endl;
	}		
}				





int leggi_vettore(int v[MAX],int &dimensione){								  	     //leggi vettore
    cout<<"quanti elementi ha il vettore?"<<endl;
    cin>>dimensione;
	for(int i=0;i<dimensione;i++){
	cout<<"inserisci l'elemento "<<i+1<<": ";
	cin>>v[i];
	}
}





void stampa_vettore(int v[MAX],int &dimensione){					              	 //stampa vettore
    cout<<"stampo gli elementi del vettore: "<<endl;
	for(int i=0;i<dimensione;i++){
	cout<<v[i]<<" ";	
	}
	cout<<endl;
}	
	
	




int prodotto_vettori(int v_a[MAX],int v_b[MAX],int dimensione){                   //calcolo e stampa prodotto scalare tra vettori
		for(int i=0; i<dimensione; i++){
    	prodottoscalare += v_a[i]*v_b[i];
		}
	cout<<"il prodotto scalare tra i vettori vale: "<< prodottoscalare <<endl;  
}
			
			
			
			
			
int somma_mat(int m1[MAX][MAX],int m2[MAX][MAX]){          				         //calcolo somma tra matrici
	for(int i=0;i<r;i++){
		for(int j=0;j<n;j++){
		matricesomma[i][j]=m1[i][j] + m2[i][j];
		}
	}
}





int somma_media_vettori(int v_a[MAX], int v_b[MAX],int &n_elementi_a,int &n_elementi_b){				//Calcolo somma e media vettori
	if (n_elementi_b > n_elementi_a){
		int v_c[n_elementi_b];
		while (i < n_elementi_b){
		v_c[i] = v_a[i] + v_b[i];
		cout << "Valore ["<< i <<"]del vettore somma: " << v_c[i] << endl;
		i++;
		}
		float sommatotale=0;
		for (int i=0;i<n_elementi_b;i++){
		sommatotale+=v_c[i];
		}
		media= sommatotale/n_elementi_b;
		cout<<"la media e'': "<<media<<endl;	
	}
	
	else{
	int v_c[n_elementi_a];
		while (i < n_elementi_a){
		v_c[i] = v_a[i] + v_b[i];
		cout << "Valore ["<< i <<"]del vettore somma: " << v_c[i] << endl;
		i++;
		}
		
	float sommatotale=0;
		for (int i=0;i<n_elementi_a;i++){
		sommatotale+=v_c[i];
		}
	media= sommatotale/n_elementi_a;
	cout<<"la media e: "<<media<<endl;
	}
}

										        
