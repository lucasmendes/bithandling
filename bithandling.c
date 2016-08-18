// 1) Escreva uma função que retorna a quantidade de bits 1 que um número inteiro possui.
int bits1InInt(int input) {
  int bits1 = 0;
  int bit;
  for (bit = 0; bit < sizeof(int)*8; ++bit) {
    if (input & (1 << bit)) {
      bits1++;
    }
  }
  return bits1;
}

