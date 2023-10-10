# SWEA 1936. 1대1 가위바위보

# 가위 : 1, 바위 : 2, 보 : 3
A, B = map(int, input().split())

A = int(A)
B = int(B)

answer = ''
if A == 1:    # A : 가위
    if B == 2:    # B : 바위
        answer = 'B'
    elif B == 3:    # B : 보
        answer = 'A'
elif A == 2:    # A : 바위
    if B == 1:    # B : 가위
        answer = 'A'
    elif B == 3:   # B : 보
        answer = 'B'
elif A == 3:    # A : 보
    if B == 1:    # B : 가위
        answer = 'B'
    elif B == 2:    # B : 바위
        answer = 'A'

print(answer)