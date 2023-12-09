from typing import TypeAlias
from yogi import tokens, read

Matrix: TypeAlias = list[list[int]]


def main():
    for n in tokens(int):
        A = [[read(int) for _ in range(n)] for _ in range(n)]
        B = [[read(int) for _ in range(n)] for _ in range(n)]
        C = product(A, B)
        for i in range(n):
            for j in range(n):
                print(C[i][j], end=' ')
            print()
        print()


main()
