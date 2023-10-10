# SWEA 2043. 서랍의 비밀번호

P, K = map(int, input().split())

answer = int(P) - int(K) + 1
print(answer)