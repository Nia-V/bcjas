int Count[10][7] = {
{1,1,1,1,1,1,0},
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

unsigned long nowtime;
void setup(){
  Serial.begin(9600);
   for(int k = 2; k<=10; k++){
    pinMode(k, OUTPUT);
   }
  }

             
             
void loop (){
 for(int k = 0; k<10; k++){
  switch (k) {
  case 0: 
    Zro();
    break;
  case 1:
    One();
    break;
    case 2:
    Two();
    break;
    case 3:
   Thr();
    break;
    case 4:
   For();
    break;
    case 5:
 Fiv();
    break;
    case 6:
    Six();
    break;
    case 7:
  Svn();
    break;
    case 8:
  Eht();
    break;
    case 9:
    Nin();
    break;
  default:
   Nin();
    break;
}
}}
void One(){
   for(int c = 0; c<7; c++){
       int z = Count[1][c];
      digitalWrite(c+2, z);
   }
    }
    void Two(){
   for(int c = 0; c<1; c++){
       int z = Count[2][c];
      digitalWrite(c+2, z);
      }

    }
    void Thr(){
   for(int c = 0; c<7; c++){
       int z = Count[3][c];
      digitalWrite(c+2, z);
      }

    }
    void For(){
   for(int c = 0; c<7; c++){
       int z = Count[4][c];
      digitalWrite(c+2, z);
      }

    }
    void Fiv(){
   for(int c = 0; c<7; c++){
       int z = Count[5][c];
      digitalWrite(c+2, z);
      }

    }
    void Six(){
   for(int c = 0; c<7; c++){
       int z = Count[6][c];
      digitalWrite(c+2, z);
      }

    }
    void Svn(){
   for(int c = 0; c<7; c++){
       int z = Count[7][c];
      digitalWrite(c+2, z);
      }

    }
    void Eht(){
   for(int c = 0; c<7; c++){
       int z = Count[8][c];
      digitalWrite(c+2, z);
      }

    }
    void Nin(){
   for(int c = 0; c<7; c++){
       int z = Count[9][c];
      digitalWrite(c+2, z);
      }

   void Zro(){
    for(int c = 0; c<7; c++){
       int z = Count[0][c];
      digitalWrite(c+2, z);
      }
    }
