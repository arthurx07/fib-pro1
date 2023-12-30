from yogi import *

n = scan(int)
while n is not None:
  v = []
  for i in range(0, n):
    v.append(read(float))
  t = read(int)
  while t != 0:
    t -= 1
    x, esq, dre = read(float), read(int), read(int)
    print(position(x, v, esq, dre))
  n = scan(int)

