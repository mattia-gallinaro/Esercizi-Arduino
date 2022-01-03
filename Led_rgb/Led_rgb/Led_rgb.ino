//BLUE, GREEN and RED are the pins of the controller board
#define BLUE 3
#define GREEN 5
#define RED 6
#define delayTime 10
//
void ChangeColor(int &v1, int &v2, int color1, int color2);
void setup() {
  // put your setup code here, to run once:
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, HIGH);
  digitalWrite(GREEN, LOW);
  digitalWrite(BLUE, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
redValue = 255;//select a value for red beween 1 and 255 to change color
greenValue = 0;
blueValue = 0;

ChangeColor(redValue, greenValue, RED, GREEN);

redValue = 0;
greenValue = 255;
blueValue = 0;
ChangeColor(greenValue, blueValue, GREEN, BLUE);


redValue = 0;
greenValue = 0;
blueValue = 255;
ChangeColor(blueValue, redValue, BLUE, RED);

}
void ChangeColor(int &v1, int &v2, int color1, int color2)//the first two parameters modifies the value of the color from the loop
                                                         //color1 and color2 are the pins for the output
{
  for(int i = 0; i < 255 ; i++)//fades out the first color and full fill with the second color when i=255
  {
    v1 -= 1;
    v2 += 1;
    analogWrite(color1, v1);//
    analogWrite(color2, v2);//
    delay(delayTime);//wait the value of delayTime so 10 ms
  }
}
