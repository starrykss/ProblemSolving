# SWEA 2025. N줄덧셈

N = int(input())

answer = 0
for num in range(1, N + 1):
    answer += num

print(answer)