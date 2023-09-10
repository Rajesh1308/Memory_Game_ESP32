int pin1 = 2, pin2 = 4, pin3 = 5;
int n_nums = 6;
int n_levels = 10;
int check_num = 0;
int button_pin1 = 15;
int button_pin2 = 21;
int button_pin3 = 19;
int push_button_pin1_out = 0;
int push_button_pin2_out = 0;
int push_button_pin3_out = 0;
int i = 0;
int delay_time = 500;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(pin1, OUTPUT);
  pinMode(pin2, OUTPUT);
  pinMode(pin3, OUTPUT);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  int num = 123123;
  int rem = num%10;
  Serial.println(rem, num);

  //-----------------------------------------------------
  while(rem != 0){
    switch(rem){
      case 1:
      digitalWrite(pin1, HIGH);
      delay(delay_time);
      digitalWrite(pin1, LOW);
      break;
      case 2:
      digitalWrite(pin2, HIGH);
      delay(delay_time);
      digitalWrite(pin2, LOW);
      break;
      case 3:
      digitalWrite(pin3, HIGH);
      delay(delay_time);
      digitalWrite(pin3, LOW);
      break;
      default:
      digitalWrite(4, HIGH);
      delay(delay_time);
      digitalWrite(4, LOW);
      break;
      
    }  //End of Switch case


    num = num/10;
    rem = num%10;
    delay(300);
  } //End of display While Loop



/*************** Getting input and checking for correctness ******************/


  while((push_button-pin1_out != 1 || push_button-pin2_out != 1  ||  push_button-pin3_out != 1)){

    //Reading the input
    push_button_pin1_out = digitalRead(button_pin1);
    push_button_pin2_out = digitalRead(button_pin2);
    push_button_pin3_out = digitalRead(button_pin3);

    // Changing the test array element
    if (push-button_pin1_out == HIGH){
      check_num = check_num + 1;

    //changing the values in the variables
      push_button_pin1_out = 0;
      push_button_pin2_out = 0;
      push_button_pin3_out = 0;
    }
    else if (push-button_pin2_out == HIGH){
      check_num = check_num + 2;

    //changing the values in the variables
      push_button_pin1_out = 0;
      push_button_pin2_out = 0;
      push_button_pin3_out = 0;
    }
    else if (push-button_pin3_out == HIGH){
      check_num = check_num + 3;

    //changing the values in the variables
      push_button_pin1_out = 0;
      push_button_pin2_out = 0;
      push_button_pin3_out = 0;
    }

    check_num = check_num * 10;
    
  }//End of check while loop
 
  delay(2000);
}
