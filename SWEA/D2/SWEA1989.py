# SWEA 1989. 초심자의 회문 검사

T = int(input())

for test_case in range(1, 1 + T):
    S = str(input())

    answer = 1
    for idx in range(len(S)):    # 정방향
        if S[idx] != S[len(S) - idx - 1]:
            answer = 0
            break
    
    print(f"#{test_case} {answer}")