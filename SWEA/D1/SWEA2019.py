# SWEA 2019. 더블더블

N = int(input())

answer = 1
for num in range(1, N + 2):
    answer = pow(2, num - 1)
    print(answer, end=" ")