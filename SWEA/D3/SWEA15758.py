# SWEA 15758. 무한 문자열

T = int(input())

for test_case in range(1, 1 + T):
    S, T = map(str, input().split())

    # 정답 찾기
    answer = "yes" if S * len(T) == T * len(S) else "no"

    # 정답 출력하기
    print(f"#{test_case} {answer}")