
                               ////////////////////////////////////////////////
                               //////////STUDIO DI MATRICI E VETTORI///////////
							   ////////////////////////////////////////////////

//Paolo Panariello N47006229
//Alessio Nevola N47006472

#include <iostream>
#include "libreria.h"
#include "funzioni.cpp"
using namespace std;  

int main(){
	int impostazione;

	cout<<"Scegliere tra le seguenti l'operazione a cui si e' interessati e digitare  il relativo numero in elenco:"<<endl;
	cout<<"1=Operazioni su singola matrice: somma righe e somma colonne, somma diagonale principale, trasposta e prodotto matrice per la sua trasposta"<<endl;
	cout<<"2=Operazioni tra due vettori: somma e media degli elementi (tutte opzioni con scelta di eleminazione elemto da array in fase di inserimento)"<<endl;			
	cout<<"3=Operazioni tra due vettori di uguale dimensione: prodotto scalare"<<endl;
	cout<<"4=Operazioni tra due matrici: prodotto e somma"<<endl;
	cout<<"5=Operazione su singola matrice quadrata: calcolo del determinante con Laplace"<<endl;
		
	cin>>impostazione;
	
	switch(impostazione){
		
		case 1:
			
			    cout<<"inserire il numero di righe"<<endl;
			    cin>>r;
			    cout<<"inserire il numero di colonne"<<endl;
			    cin>>n;
			
				valmat(m);																       //assegnazione valori alla matrice
			
			
			    stampmat(m);																   //stampa matrice inserita
			
		
			    sommarig(sr,m); 															   //operazione di somma righe
			
			
				sommacol(sn,m);																   //operazione di somma colonne
			
			
				sommadiag(m);														           //somma della diagonale principale
				
																			   				   
			    for (int i=0; i<r; i++){													   //calcolo della matrice trasposta
			        for(int j=0; j<n; j++){
			            trasposta[j][i]=m[i][j];
			        }
			    }
			    
			    
			    cout << "matrice trasposta: "<<endl;										   //stampa matrice trasposta
			    for (int j=0; j<n; j++){                  			             
			        for(int i=0; i<r; i++){
			            cout<< trasposta [j][i] << "\t";
			        }
			        cout << endl;
			    }
	
	
				calcola_prodotto(m, trasposta);										           //calcolo e stampa del prodotto matrice per la sua trasposta
	

			    cout<<"la somme delle righe e'"<<endl;                                        //stampa somma righe
			    for(int i=0; i<r; i++){
			                cout<<sr[i]<<"\t";
			    }
			    cout<<endl;
			
			
			    cout<<"la somme delle colonne e'"<<endl;                                      //stampa somma colonne
			    for(int j=0; j<n; j++){
			                cout<<sn[j]<<"\t";
			    }
			    cout<<endl;
		
				
				cout<<"la somma della diagonale e': "<<sommadiagonale<<endl;                     //stampo la somma della diagonale	
		break;
		
			
			
			
		
		case 2:
			
		leggi_vettore(v_a, n_elementi_a); 													  //inserimento vettore 1
		
		leggi_vettore(v_b, n_elementi_b); 													  //inserimento vettore 2


		stampa_vettore(v_a,n_elementi_a); 													  //stampa vettore 1
		
		stampa_vettore(v_b,n_elementi_b);                                                     //stampa vettore 2


		somma_media_vettori(v_a, v_b, n_elementi_a, n_elementi_b);	             			  //calcola la media e la stampa
		break;
		
		
		
		
		
		case 3:	
		cout<< "INSERIRE VETTORI DI UGUALE DIMENSIONE"<<endl;
		cout<<"inserire la dimensione del primo vettore"<<endl;
		cin>>dimensione1;
		cout<<"inserire la dimensione del secondo vettore"<<endl;
		cin>>dimensione2;
		
			if(dimensione1==dimensione2){
				
				for(int i=0;i<dimensione1;i++){													 //lettura primo vettore di dimensione pari a "dimensione1"
				cout<<"inserisci l'elemento "<<i+1<<" del primo vettore: ";
				cin>>v_a[i];
				}
				
				for(int i=0;i<dimensione1;i++){													//lettura secondo vettore di dimensione pari a "dimensione2"
				cout<<"inserisci l'elemento "<<i+1<<" del secondo vettore: ";
				cin>>v_b[i];
				}				

			
				stampa_vettore(v_a,dimensione1);                                                  //stampa vettore 1
		
		
				stampa_vettore(v_b,dimensione2);												  //stampa vettore 2
				
				prodotto_vettori(v_a,v_b,dimensione1);					                          //calcola e stampa prodotto tra vettori
			}
			else{
				cout<<"i vettori hanno dimensioni diverse e il prodotto scalare non può essere calcolato"<<endl;
			}	
		break;
		
		
		
		
		
		case 4:
			
		cout<<"inserire il numero di righe della prima matrice"<<endl;						  //assegnazione valori alla matrice 1
		cin>>r;
		cout<<"inserire il numero di colonne della prima matrice"<<endl;
		cin>>n;
		valmat(m1);																              
		
		stampmat(m1);																          //stampa matrice inserita	1
		
		
		cout<<"inserire il numero di righe della seconda matrice"<<endl;					  //assegnazione valori alla matrice 2
		cin>>r;
		cout<<"inserire il numero di colonne della seconda matrice"<<endl;
		cin>>n;	
		valmat(m2);																              				
		
		stampmat(m2);																		  //stampa matrice inserita	2
			
			
		calcola_prodotto(m1,m2);										                      //calcolo e stampa prodotto tra matrici
		
		
		somma_mat(m1,m2);														              //calcolo somma tra matrici
															
		cout<<"la matrice somma e' ["<<r<<"]["<<n<<"]"<<endl;								  //stampo matrice somma										
			for(int i=0; i<r; i++){
				for(int j=0; j<n; j++){
					cout<<matricesomma[i][j]<<"\t";                                                 
				}
			cout<<endl;
			}
		break;
		
	
	
	
	
		case 5: 
		                       
		    cout<<"Ordine della matrice: ";
		    cin>>c;                                               
			
			
		    for(int i=0; i<c; i++){        					  								  //assegnazione valori alla matrice
		         for(int j=0; j<c; j++){
		    cout<<"inserire un valore ["<<i<<"]"<<"["<<j<<"]"<<endl;
		    cin>>m[i][j];
		        }
		    }
		    
		    
		    cout<<"matrice["<<c<<"]["<<c<<"]"<<endl;							   			  //stampa matrice inserita
		    for (int i=0; i<c; i++){    						
		        for(int j=0; j<c; j++){
		                cout << m[i][j] << "\t";
		        }
		    cout << endl;
		    }
		    
		    
		    cout<<"Il determinante della matrice vale: "<<det(m, c)<<endl<<endl;	          //Calcolo determinante mediante funzione
		break;	
		
		
		
		
		
		default:
		cout<<impostazione<<" Non e' un'operazione possibile";	
	}
}
