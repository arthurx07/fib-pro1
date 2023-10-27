from yogi import scan

n = scan(int)
while n is not None:
  print("true" if is_palindromic(n) else "false")
  n = scan(int)

