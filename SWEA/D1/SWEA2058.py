# SWEA 2058. 자릿수 더하기

N = int(input())

answer = 0
while N != 0:
    answer += N % 10
    N //= 10

print(answer)