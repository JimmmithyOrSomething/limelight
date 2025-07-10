#include <arduinoFFT.h>
#define samp 128
#define frqc 100
void setup() {
 
Serial.begin(9600);
pinMode(A0,INPUT);
pinMode(A1,INPUT);
pinMode(A2,INPUT);
}
  int aData[128];
int bData[128];

double real[128];
double imag[128];

double res = (double) frqc/samp;

ArduinoFFT<double> FFT = ArduinoFFT<double>(real,imag, samp,frqc );


void loop() {

for(int i = 0; i < samp; i++){

int ref = analogRead(A1);
int a = (analogRead(A0) - ref);
int b = (analogRead(A2) - ref);
aData[i] = (a+b)/2;
bData[i] = b;
// for now I'm avg the two values later I could do data post FFT but I need to see how this works until I have my hardware
delay(10);
}



for (int e = 0; e < samp; e++){

real[e] = (double) aData[e];
imag[e] = 0.0;
  
}
FFT.windowing(real, samp, FFT_WIN_TYP_HAMMING, FFT_FORWARD);
FFT.compute(real, imag, samp, FFT_FORWARD);
FFT.complexToMagnitude(real, imag, samp) ;//POP POP!


int deltaP = 0;
int thetaP = 0;
int alphaP = 0;
int betaP = 0;
int gammaP = 0;

for (int i = 1; i < samp/2; i++){
  
  int Hz = (i*frqc)/samp;
  double power = real[i]*real[i];
 if (Hz > 30){
  gammaP = gammaP + power;
}
else if (Hz > 13){
   betaP = betaP + power; 
}
else if(Hz > 8){
  alphaP = alphaP + power;
}
else if (Hz > 4){
   thetaP = thetaP + power;
}
else if(Hz > .5){
 deltaP = deltaP + power;
}
}
// returns the bin with the largest number
double maxVal = 0;
int vBin = 0;
for(int y = 1; y < (samp/2); y++){

if (real[y] > maxVal){
  maxVal = real[y];
  vBin = y;
}

}
double MaxHz = (vBin* frqc)/ samp;
Serial.print("Max Hz value:");
Serial.print(MaxHz);
// dones other stuff

int maxValue = 0;
int in = 0;
double AHz = 0;
for (int i = 1; i < samp/2; i ++){

if (real[i] > maxValue){
  maxValue = real[i];
  in = i;
}

}
AHz = (in*frqc)/samp;
Serial.println(AHz);

/*
double maxVal = 0;
int vBin = 0;
int bBin = 0;
for(int y = 0; y < (samp/2); y++){

if (real[y] > maxVal){
  maxVal = real[y];
  vBin = y;
}

}
bBin = vBin;


double Hz = (bBin*frqc)/samp;
Serial.print("bin: ");
Serial.println(bBin);
Serial.print("Hz:");
Serial.println(Hz);
Serial.print("Sate:");
String state = "No connection";
if (Hz > 30){
  state = "Gamma";
}
else if (Hz > 13){
  state = "Beta";
}
else if (Hz > 4){
  state = "Theta";
}
else if(Hz > .5){
  state = "Delta";
}
Serial.println(state);

for (int i = 0; i < samp; i++){
Serial.println(real[i]);
delay(10);
}

Serial.print("a: ");
Serial.println(analogRead(A0));


Serial.print("b ");
Serial.println( b);
delay(100);
*/

}



