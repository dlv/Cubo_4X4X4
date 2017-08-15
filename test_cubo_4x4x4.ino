int Columnas[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};	 
int Filas[] = {16, 17, 18, 19};

void acende(int);
void apaga(int);

void seq_1(int [], boolean);

int RandFila;     //Variable para fila aleatoria
int RandColumna;  //Variable para columna aleatoria
	 
void setup()
{
  int contador;
	 
  for (int contador = 0; contador < 16; contador++) {
  	pinMode(Columnas[contador], OUTPUT); 
  }
  	 
  for (int contador = 0; contador < 5; contador++) {
  	pinMode(Filas[contador], OUTPUT); 
  }
}
	 
void loop()
{
//  RandLed();
//  delay(150);
//  Sequencia();
  Minhoca();
}
	 
void RandLed()
{
  RandFila = random(0,4);
  RandColumna = random(0,16);
  	 
  digitalWrite(Filas[RandFila], HIGH);
  digitalWrite(Columnas[RandColumna], HIGH);
  	 
  delay(50);
  	 
  digitalWrite(Filas[RandFila], LOW);
  digitalWrite(Columnas[RandColumna], LOW);
  	 
  delay(75);
}


void acendeFila(int posicao){
  digitalWrite(posicao, HIGH); 
}

void apagaFila(int posicao){
  digitalWrite(posicao, LOW); 
}

void acende(int posicao) {
  digitalWrite(posicao, HIGH);
  delay(80); 
}

void apaga(int posicao){
  digitalWrite(posicao, LOW);
  delay(80); 
}

void seq_1(int fila[], boolean acender){
  if (acender == true){
    for(int i = 0; i < 16; i++){
        acende(fila[i]);
    }
  } else {
    for(int i = 15; i >= 0; i--){
        apaga(fila[i]);
    }
  }
//   delay(80);
}


void Sequencia()
{
  int dl = 150;

  int fila1[] = {1, 0, 14, 15};     // Fila 1
  int fila2[] = {2, 3, 4, 5};       // Fila 2
  int fila3[] = {9, 8, 7, 6};       // Fila 3
  int fila4[] = {10, 11, 12, 13};   // Fila 4 

  acendeFila(Filas[0]); 

  seq_1(fila1,true);
  seq_1(fila1,false);
  delay(dl);

  seq_1(fila2,true);
  seq_1(fila2,false);
  delay(dl);

  seq_1(fila3,true);
  seq_1(fila3,false);
  delay(dl);

  seq_1(fila4,true);
  seq_1(fila4,false);
  delay(dl);

  apagaFila(Filas[0]);
  delay(150);
}

void Minhoca()
{
  int dl = 150;
  
  int seq1[] = {1,0,14,15,2,3,4,5,9,8,7,6,10,11,12,13};
        
  acendeFila(Filas[0]);
  seq_1(seq1,true);
  delay(dl);
  seq_1(seq1,false);
  apagaFila(Filas[0]);
  
  acendeFila(Filas[1]);
  seq_1(seq1,true);
  delay(dl);
  seq_1(seq1,false);
  apagaFila(Filas[1]);
  
  acendeFila(Filas[2]);
  seq_1(seq1,true);
  delay(dl);
  seq_1(seq1,false);
  apagaFila(Filas[2]);
  
  acendeFila(Filas[3]);
  seq_1(seq1,true);
  delay(dl);
  seq_1(seq1,false);
  apagaFila(Filas[3]);

  delay(150);
}
