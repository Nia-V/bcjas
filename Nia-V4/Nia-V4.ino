int Count[9][7] = {
{0,1,1,0,0,0,0},
{1,1,0,1,1,0,1},
{1,1,1,1,0,0,1},
{0,1,1,0,0,1,1},
{1,0,1,1,0,1,1},
{1,0,1,1,1,1,1},
{1,1,1,0,0,0,0},
{1,1,1,1,1,1,1},
{1,1,1,1,0,1,1}
};

void setup(){
  Serial.begin(9600);
   for(int k = 2; k<=10; k++){
    pinMode(k, OUTPUT);
   }
  }

             
             
void loop (){
One();
Two();
Thr();
For();
Fiv();
Six();
Svn();
Eht();
Nin();
}
void One(){
   for(int c = 0; c<7; c++){
       int z = Count[0][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Two(){
   for(int c = 0; c<1; c++){
       int z = Count[2][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Thr(){
   for(int c = 0; c<7; c++){
       int z = Count[2][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void For(){
   for(int c = 0; c<7; c++){
       int z = Count[3][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Fiv(){
   for(int c = 0; c<7; c++){
       int z = Count[4][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Six(){
   for(int c = 0; c<7; c++){
       int z = Count[5][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Svn(){
   for(int c = 0; c<7; c++){
       int z = Count[6][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Eht(){
   for(int c = 0; c<7; c++){
       int z = Count[7][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
    void Nin(){
   for(int c = 0; c<7; c++){
       int z = Count[8][c];
      digitalWrite(c+2, z);
      }
    delay(1000);
    }
