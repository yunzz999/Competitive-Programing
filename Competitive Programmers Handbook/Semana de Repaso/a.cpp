int fibonacci(int n) {
  int anterior1 = 0, anterior2 = 1, suma = 0;
  for (int i = 0; i < n;  ++i) {
    suma = anterior1 + anterior2;
    anterior2 = anterior1;
    anterior1 = suma;
  }
  return suma;
}