int max2(int x, int y) {
  int max = x;
  if (y > max) max = y;
  return max;
}

int min2(int x, int y) {
  int min = x;
  if (y < min) min = y;
  return min;
}

int sum_min_max(int x, int y, int z) {
  return min2(min2(x, y), z) + max2(max2(x, y), z);
};
