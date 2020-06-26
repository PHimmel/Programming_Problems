// preprocessor commands

#include <stdio.h>

#define SALES_TAX 8.25
#define TV_PRICE 400.00
#define VCR_PRICE 250.00
#define REMOTE_PRICE 35.20
#define CD_PRICE 300.00
#define TAPE_PRICE 150.00

// function declarations

int problem39(void);

//main

int main (void){
  problem39();
  return 0;
}

int problem39 (void) {
  //local declarations
  int tv;
  int vcr;
  int remote;
  int cd;
  int tape;
  float tvPrice;
  float vcrPrice;
  float remotePrice;
  float cdPrice;
  float tapePrice;
  float sum;
  float taxAmount;
  float finalTotal;
  //statements

  //total sold
  printf("How Many TVs Were Sold? ");
  scanf("%d", &tv);
  printf("How Many VCRs Were Sold? ");
  scanf("%d", &vcr);
  printf("How Many Remote Controllers Were Sold? ");
  scanf("%d", &remote);
  printf("How Many CDs Were Sold? ");
  scanf("%d", &cd);
  printf("How Many Tape Recorders Were Sold? ");
  scanf("%d", &tape);
  printf("\n");

  //pre-tax price

  tvPrice = tv * TV_PRICE;
  vcrPrice = vcr * VCR_PRICE;
  remotePrice = remote * REMOTE_PRICE;
  cdPrice = cd * CD_PRICE;
  tapePrice = tape *  TAPE_PRICE;

  sum = tvPrice + vcrPrice +remotePrice + cdPrice
  + tapePrice;
  
  //post-tax rate and price
  taxAmount = sum * (SALES_TAX/100);
  //printf("%4.2f\n", taxAmount);
  finalTotal = sum + taxAmount;
  //printf("%4.2f\n\n", finalTotal);

  //pretty formatted output
  printf("QTY    DESCRIPTION    UNIT PRICE   " 
  "TOTAL PRICE\n");
  printf("---    -----------    ---- -----   "
  "----- -----\n");
  printf("% 2d      TV                %4.2f       % 7.2f\n", 
  tv, TV_PRICE, tvPrice);
  printf("% 2d      VCR               %4.2f       % 7.2f\n",
  vcr, VCR_PRICE, vcrPrice);
  printf("% 2d      REMOTE CTRLR       %4.2f       % 7.2f\n",
  remote, REMOTE_PRICE, remotePrice);
  printf("% 2d      CD PLAYER         %4.2f       % 7.2f\n",
  cd, CD_PRICE, cdPrice);
  printf("% 2d      TAPE RECORDER     %4.2f       % 7.2f\n",
  tape, TAPE_PRICE, tapePrice);
  printf("                                   -----------\n");
  printf("                      SUBTOTAL        " "% 8.2f\n", sum);
  printf("                      TAX              % 7.2f\n",
  taxAmount);
  printf("                      TOTAL           % 8.2f\n", finalTotal);
  return 0;
}

int sectionOneProb (void) {
  int num1;
  int num2;
  double a;
  double b;
  double c;
  double division;
  //a = b = c = 0.0;
  //statements
  printf("Give two numbers\n");
  int test = scanf("%d %d", &num1, &num2);
  division = 1.0 * num1/num2;
  printf("%5.3f\n", division);
  printf("%d", test);
  printf("now give three floats\n");
  scanf("%lf %lf %lf", &a, &b, &c);
  double product = a * b * c;
  printf("%lf", product);
  return 0;
}
