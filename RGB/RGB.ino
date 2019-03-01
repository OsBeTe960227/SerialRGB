char val;
String string;
int R=2;
int G=3;
int B=4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(R,OUTPUT);
  pinMode(G,OUTPUT);
  pinMode(B,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  if(Serial.available()){
    val=Serial.read();
      if(val==10){
        //si hay nueva linea no se concatena a la cadena
      }else{
        string+=val;
      }
      
  }
  //LED ROJO
    if (string == "RH"){
      Serial.println("LED ROJO ON");   
      digitalWrite(R,HIGH);
      
      string="";
    }  
    if(string == "RL"){
      Serial.println("LED ROJO OFF");   
      digitalWrite(R,LOW);
      string="";
    }

    //LED VERDE

    if (string == "GH"){
      Serial.println("LED VERDE ON");   
      digitalWrite(G,HIGH);
      
      string="";
    }  
    if(string == "GL"){
      Serial.println("LED VERDE OFF");   
      digitalWrite(G,LOW);
      string="";
    }
    
    //LED AZUL

    if (string == "BH"){
      Serial.println("LED AZUL ON");   
      digitalWrite(B,HIGH);
      
      string="";
    }  
    if(string == "BL"){
      Serial.println("LED AZUL OFF");   
      digitalWrite(B,LOW);
      string="";
    }
}
