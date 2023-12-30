from yogi import *

m, n = scan(int), scan(int)
while m is not None and n is not None:
  v = []
  for i in range(0, n): v.append(read(float))
  print(position_maximum(v, m))
  m, n = scan(int), scan(int)

