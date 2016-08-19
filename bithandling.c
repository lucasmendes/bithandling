/**
 * Bit handling methods
 * @author Lucas Martin Giacomini Mendes
 * @date 18-aug-2016
 */

// 1) Escreva uma função que retorna a quantidade de bits 1 que um número inteiro possui.
int bits1InInt(int input) {
  int bits1 = 0;
  int bit;
  for (bit = 0; bit < sizeof(int) * 8; ++bit) {  // Sweep all bit of input integer
    if (input & (1 << bit)) {  // If (n)th bit of input integer is 1
      bits1++;                 // Add 1 to bits1 counter
    }
  }
  return bits1;
}

// 2) Escreva uma função que retorna se dado número é uma potência de 2.
bool intIsPowerOf2(unsigned int input) {
  while ((input % 2) == 0) {  // Divide input by 2 until reach a odd number
    input /= 2;
  }
  if (input == 1) {      // If current input is 1
    return TRUE;         // input is indeed power of 2
  } else {
    return FALSE;
  }
}

// 3) Escreva uma função que imprima todos os números de 32bits que não possuam dois bits 1 lado a lado. 
int printNonRepeating1BitInteger(int input) {
  // Assuming list of integers is comming from caller
  int bit;
  for (bit = 0; bit < sizeof(int) * 8; ++bit) {  // Sweep all bit of input integer
    if ((input & (1 << bit)) && (input & (1 << (bit + 1)))) {  // If (n)th and (n+1)th bit of input integer are 1
      return -1;  // Don't print and return an error code
    }
  }
  printf("%d\n", input);  // If no repeat of bit 1 is found, print integer
  return 0;
}
