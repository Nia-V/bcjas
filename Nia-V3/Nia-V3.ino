
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
  for (int k = 0; k<9; k++){
    for(int c = 0; c<7; c++){
       int z = Count[k][c];
      digitalWrite(c+2, z);
    Serial.println(z);
      

    }
    delay(1000);
    }}
