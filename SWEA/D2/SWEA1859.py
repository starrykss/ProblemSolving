# SWEA 1859. 백만 장자 프로젝트

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())
    num_list = list(map(int, input().split()))

    answer = 0
    num_max = 0

    for num in num_list[::-1]:    # 역순으로 조회
        if num_max <= num:
            num_max = num     # 최댓값 갱신
        else:
            answer += num_max - num

    print(f"#{test_case} {answer}")
