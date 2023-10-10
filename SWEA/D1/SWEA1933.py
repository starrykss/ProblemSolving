# SWEA 1933. 간단한 N의 약수

N = int(input())

for num in range(1, N + 1):
    if N % num == 0:    # 나머지를 구한다.
        print(num, end=" ") 