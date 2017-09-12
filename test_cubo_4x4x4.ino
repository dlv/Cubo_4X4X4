int p0 = 1;
int p1 = 0;
int p2 = 14;
int p3 = 15;

int p4 = 5;
int p5 = 4;
int p6 = 3;
int p7 = 2;

int p8 = 9;
int p9 = 8;
int p10 = 7;
int p11 = 6;

int p12 = 13;
int p13 = 12;
int p14 = 11;
int p15 = 10;

int base0 = 16;
int base1 = 17;
int base2 = 18;
int base3 = 19;

int colunas[] = {p0, p1, p2, p3, p4, p5, p6, p7, p8, p9, p10 ,p11 ,p12 ,p13 ,p14 ,p15};	 
int bases[] = {base0, base1, base2, base3};

void setup() 
{
  // Configura as portas de saida
  for (int i = 0; i < 16; i++){
    pinMode(colunas[i],OUTPUT);
  }
  for (int i = 0; i < 4; i++){
    pinMode(bases[i],OUTPUT);
  }
}

void loop() 
{
  acendeIndoCentro();
  girarParaLado();
  contornarEmLinha();
  sequencialLinha();
  variacaoParImpar();
  todos();
  baseBaixoCima(); 
  expiral();
  acendeexpiral();
  baixoCimaPiscando();
  
}
/////////////////////////////////////////
void acendeIndoCentro(){
  int time = 200;

  for (int i = 0; i < 4; i++){
    
    for (int j = 0; j < 4; j++){
      digitalWrite(bases[j],HIGH);
    }
    
    digitalWrite(colunas[0],HIGH);
    delay(time);
    
    digitalWrite(colunas[1],HIGH);
    digitalWrite(colunas[4],HIGH);
    digitalWrite(colunas[5],HIGH);
    delay(time);
    
    digitalWrite(colunas[8],HIGH);
    digitalWrite(colunas[9],HIGH);
    digitalWrite(colunas[10],HIGH);
    digitalWrite(colunas[6],HIGH);
    digitalWrite(colunas[2],HIGH);
    delay(time);
    
    digitalWrite(colunas[12],HIGH);
    digitalWrite(colunas[13],HIGH);
    digitalWrite(colunas[14],HIGH);
    digitalWrite(colunas[15],HIGH);
    digitalWrite(colunas[11],HIGH);
    digitalWrite(colunas[7],HIGH);
    digitalWrite(colunas[3],HIGH);
    delay(time);
    
    desliga(0); 
  }
}
/////////////////////////////////////////
void girarParaLado(){
  
  int time = 40;
  
  for (int i = 0; i < 4; i++){
    digitalWrite(bases[i],HIGH);
  }
  
  for (int i = 0; i < 16; i++){
    digitalWrite(colunas[i],HIGH);
    delay(50);
  }
   delay(300);
   
  for (int i = 0; i < 20; i++){
    digitalWrite(colunas[0],LOW);
    digitalWrite(colunas[15],LOW);
    delay(time);
    
    digitalWrite(colunas[0],HIGH);
    digitalWrite(colunas[15],HIGH);
    delay(time);
    
    digitalWrite(colunas[4],LOW);
    digitalWrite(colunas[11],LOW);
    delay(time);
    
    digitalWrite(colunas[4],HIGH);
    digitalWrite(colunas[11],HIGH);
    delay(time);
    
    digitalWrite(colunas[8],LOW);
    digitalWrite(colunas[7],LOW);
    delay(time);
    
    digitalWrite(colunas[8],HIGH);
    digitalWrite(colunas[7],HIGH);
    delay(time);
    
    digitalWrite(colunas[12],LOW);
    digitalWrite(colunas[3],LOW);
    delay(time);
    
    digitalWrite(colunas[12],HIGH);
    digitalWrite(colunas[3],HIGH);
    delay(time);
    
    digitalWrite(colunas[13],LOW);
    digitalWrite(colunas[2],LOW);
    delay(time);
    
    digitalWrite(colunas[13],HIGH);
    digitalWrite(colunas[2],HIGH);
    delay(time);
    
    digitalWrite(colunas[14],LOW);
    digitalWrite(colunas[1],LOW);
    delay(time);
    
    digitalWrite(colunas[14],HIGH);
    digitalWrite(colunas[1],HIGH);
    delay(time);
  }    
    desliga(0);
  }
/////////////////////////////////////////
void contornarEmLinha(){
  
 int time = 200;
 for(int i = 0; i< 5;i++){ 
  //primeira ----
    digitalWrite(bases[0], HIGH);  
    
    digitalWrite(colunas[0],HIGH);
    digitalWrite(colunas[4],HIGH);
    digitalWrite(colunas[8],HIGH);
    digitalWrite(colunas[12],HIGH);
    delay(time);
    
    digitalWrite(bases[0], LOW);
    digitalWrite(bases[1], HIGH);  
    delay(time);
    
    digitalWrite(bases[1], LOW);
    digitalWrite(bases[2], HIGH);
    delay(time);
    
    digitalWrite(bases[2], LOW);
    digitalWrite(bases[3], HIGH);
    delay(time);
  //------
  
  //segunda ---
    digitalWrite(bases[3], HIGH);  
    
    digitalWrite(colunas[0],LOW);
    digitalWrite(colunas[4],LOW);
    digitalWrite(colunas[8],LOW);
    digitalWrite(colunas[12],LOW);
    
    digitalWrite(colunas[1],HIGH);
    digitalWrite(colunas[5],HIGH);
    digitalWrite(colunas[9],HIGH);
    digitalWrite(colunas[13],HIGH);
    delay(time);
    
    digitalWrite(colunas[1],LOW);
    digitalWrite(colunas[5],LOW);
    digitalWrite(colunas[9],LOW);
    digitalWrite(colunas[13],LOW);
    
    digitalWrite(colunas[2],HIGH);
    digitalWrite(colunas[6],HIGH);
    digitalWrite(colunas[10],HIGH);
    digitalWrite(colunas[14],HIGH);
    delay(time);
    
    digitalWrite(colunas[2],LOW);
    digitalWrite(colunas[6],LOW);
    digitalWrite(colunas[10],LOW);
    digitalWrite(colunas[14],LOW);
    
    digitalWrite(colunas[3],HIGH);
    digitalWrite(colunas[7],HIGH);
    digitalWrite(colunas[11],HIGH);
    digitalWrite(colunas[15],HIGH);
    delay(time);
    
   //------ 
   
    //terceira ---
    digitalWrite(bases[3], LOW);  
    digitalWrite(bases[2], HIGH);
    delay(time);
    
    digitalWrite(bases[2], LOW);
    digitalWrite(bases[1], HIGH);  
    delay(time);
    
    digitalWrite(bases[1], LOW);
    digitalWrite(bases[0], HIGH);
    delay(time); 
   // ----
   
   //quarta ---
    digitalWrite(bases[0], HIGH); 
   
    digitalWrite(colunas[3],LOW);
    digitalWrite(colunas[7],LOW);
    digitalWrite(colunas[11],LOW);
    digitalWrite(colunas[15],LOW); 
    
    digitalWrite(colunas[2],HIGH);
    digitalWrite(colunas[6],HIGH);
    digitalWrite(colunas[10],HIGH);
    digitalWrite(colunas[14],HIGH);
    delay(time);
    
    digitalWrite(colunas[2],LOW);
    digitalWrite(colunas[6],LOW);
    digitalWrite(colunas[10],LOW);
    digitalWrite(colunas[14],LOW);
    
    digitalWrite(colunas[1],HIGH);
    digitalWrite(colunas[5],HIGH);
    digitalWrite(colunas[9],HIGH);
    digitalWrite(colunas[13],HIGH);  
    delay(time);
    
    digitalWrite(colunas[1],LOW);
    digitalWrite(colunas[5],LOW);
    digitalWrite(colunas[9],LOW);
    digitalWrite(colunas[13],LOW);
    
    digitalWrite(colunas[0],HIGH);
    digitalWrite(colunas[4],HIGH);
    digitalWrite(colunas[8],HIGH);
    digitalWrite(colunas[12],HIGH); 
   //------ 
 }
  desliga(0);
}
/////////////////////////////////////////
void sequencialLinha(){
  int time = 100;
  
  for (int j = 3; j >= 0; j--){
    digitalWrite(bases[j], HIGH);
    
    for(int i = 0; i < 4; i++) {
      digitalWrite(colunas[i],HIGH);
      delay(time);
    }
    
    for(int i = 7; i > 3; i--) {
      digitalWrite(colunas[i],HIGH);
      delay(time);
    }
    
    for(int i = 8; i < 12; i++) {
     digitalWrite(colunas[i],HIGH);
     delay(time);
    }
    
    for(int i = 15; i > 10; i--) {
      digitalWrite(colunas[i],HIGH);
      delay(time);
    }
    desliga(50);
  }  
}
/////////////////////////////////////////
void variacaoParImpar(){
  int time = 200;
  int i;
  
  digitalWrite(bases[0], HIGH);
  i = 0;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  
  desliga(200);
  
  digitalWrite(bases[1], HIGH);
   i = 1;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  desliga(200);
  
  digitalWrite(bases[2], HIGH);
  i = 0;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  
  desliga(200);
  
  digitalWrite(bases[3], HIGH);
   i = 1;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  desliga(200);

  digitalWrite(bases[0], HIGH);  
  digitalWrite(bases[1], HIGH);
  digitalWrite(bases[2], HIGH);
  digitalWrite(bases[3], HIGH);
    
  i = 0;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  
  desliga(200);

  digitalWrite(bases[0], HIGH);  
  digitalWrite(bases[1], HIGH);
  digitalWrite(bases[2], HIGH);
  digitalWrite(bases[3], HIGH);
  
  i = 1;
  while(i < 16) {
    digitalWrite(colunas[i],HIGH);
    delay(time);
    i = i + 2;
  }
  desliga(200);
}
/////////////////////////////////////////
void todos(){
  for (int i = 0; i < 4; i++){
    digitalWrite(bases[i],HIGH);
  }
  
  for (int i = 0; i < 16; i++){
    digitalWrite(colunas[i],HIGH);
    delay(200);
  }
  desliga(100);
}
////////////////////////////////////////
void desliga(int time){
  int t = 500;
  
  if (time > 0){
    t = time;
  }
  
  for (int i = 0; i < 16; i++){
    digitalWrite(colunas[i],LOW);
  }
  
  for (int i = 0; i < 4; i++){
    digitalWrite(bases[i],LOW);
  }
  delay(t);
}
////////////////////////////////////////
void baseBaixoCima(){
   
  //ACENDE LED BASE 0
  for (int i = 0; i < 16; i++){
    digitalWrite(colunas[i],HIGH);
    delay(100);
  }
  digitalWrite(base0, HIGH);
  delay(1000);
  digitalWrite(base1, HIGH);
  delay(1000);
  digitalWrite(base2, HIGH);
  delay(1000);
  digitalWrite(base3, HIGH);
  delay(1000);
  
  desliga(100);
}
////////////////////////////////////////
void expiral(){
  
  for(int i = 0; i < 4; i++){
    
    digitalWrite(bases[i], HIGH);
  
    digitalWrite(colunas[0],HIGH);
    delay(200);
    digitalWrite(colunas[1],HIGH);
    delay(200);
    digitalWrite(colunas[2],HIGH);
    delay(200);
    digitalWrite(colunas[3],HIGH);
    delay(200);
    digitalWrite(colunas[7],HIGH);
    delay(200);
    digitalWrite(colunas[11],HIGH);
    delay(200);
    digitalWrite(colunas[15],HIGH);
    delay(200);
    digitalWrite(colunas[14],HIGH);
    delay(200);
    digitalWrite(colunas[13],HIGH);
    delay(200);
    digitalWrite(colunas[12],HIGH);
    delay(200);
    digitalWrite(colunas[8],HIGH);
    delay(200);
    digitalWrite(colunas[4],HIGH);
    delay(200);
    digitalWrite(colunas[5],HIGH);
    delay(200);
    digitalWrite(colunas[6],HIGH);
    delay(200);
    digitalWrite(colunas[10],HIGH);
    delay(200);
    digitalWrite(colunas[9],HIGH);
    delay(200);
  
    digitalWrite(bases[i], LOW);
    
    for(int j = 0;j < 16; j++ ){
      digitalWrite(colunas[j],LOW);
    }
  }
  desliga(100);
}
//////////////////////////////////
void acendeexpiral(){
  digitalWrite(bases[0], HIGH);
  
  digitalWrite(colunas[5],HIGH);
  digitalWrite(colunas[6],HIGH);
  digitalWrite(colunas[9],HIGH);
  digitalWrite(colunas[10],HIGH);
  
  digitalWrite(bases[1], HIGH);
  delay(300);
  digitalWrite(bases[2], HIGH);
  digitalWrite(bases[0], LOW);
  delay(300);
  digitalWrite(bases[3], HIGH);
  digitalWrite(bases[1], LOW);
  delay(300);
  digitalWrite(bases[2], LOW);
  delay(300);
  
  for(int j = 0;j < 16; j++ ){
    digitalWrite(colunas[j],HIGH);
  }
  
  delay(300);
  digitalWrite(bases[2], HIGH);
  delay(300);
  digitalWrite(bases[1], HIGH);
  digitalWrite(bases[3], LOW);
  delay(300);
  digitalWrite(bases[0], HIGH);
  digitalWrite(bases[2], LOW);
  delay(300);
  digitalWrite(bases[1], LOW);
  delay(300);
  digitalWrite(bases[0], LOW);
  delay(300);
  
  desliga(100);
}
//////////////////////////////////
void baixoCimaPiscando(){
  int velocidade = 500;
  
  for(int i = 0;i < 16; i++ ){
    digitalWrite(colunas[i],HIGH);
  }
  
  while(velocidade >= 0){
    digitalWrite(bases[3], HIGH);
    delay(velocidade);
    digitalWrite(bases[2], HIGH);
    delay(velocidade);
    digitalWrite(bases[3], LOW);
    digitalWrite(bases[1], HIGH);
    delay(velocidade);
    digitalWrite(bases[2], LOW);
    digitalWrite(bases[0], HIGH);
    delay(velocidade);
    digitalWrite(bases[1], LOW);
    delay(velocidade);
    digitalWrite(bases[0], LOW);
    delay(velocidade);
    
   if (velocidade > 50 ){ 
     velocidade = (velocidade - 50);
   } else if(velocidade > 10) {
     velocidade = (velocidade - 10);
   } else {
     velocidade = (velocidade - 1); 
   }   
  }
  int pisca = 10;
  while(pisca >= 0){
    digitalWrite(bases[3], HIGH);
    delay(20);
    digitalWrite(bases[2], HIGH);
    delay(20);
    digitalWrite(bases[3], LOW);
    digitalWrite(bases[1], HIGH);
    delay(20);
    digitalWrite(bases[2], LOW);
    digitalWrite(bases[0], HIGH);
    delay(20);
    digitalWrite(bases[1], LOW);
    delay(20);
    digitalWrite(bases[0], LOW);
    delay(20);
    pisca --;
  }
    
  desliga(100);  
}
////////////////////////////////// 
