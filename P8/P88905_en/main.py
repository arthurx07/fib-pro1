from typing import TypeAlias
from yogi import tokens, read

Matrix: TypeAlias = list[list[int]]


def main():
    for p in tokens(int):
        q, r = read(int), read(int)
        A = [[read(int) for _ in range(q)] for _ in range(p)]
        B = [[read(int) for _ in range(r)] for _ in range(q)]
        C = product(A, B)
        for i in range(p):
            for j in range(r):
                print(C[i][j], end=' ')
            print()
        print()


main()
