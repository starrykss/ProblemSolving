# SWEA 2029. 몫과 나머지 출력하기

T = int(input())

for test_case in range(1, 1 + T):
    a, b = map(int, input().split())

    a = int(a)
    b = int(b)

    num_quotient = a // b    # 몫
    num_remainder = a % b    # 나머지

    print(f"#{test_case} {num_quotient} {num_remainder}")