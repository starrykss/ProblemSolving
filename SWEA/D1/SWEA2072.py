# SWEA 2072. 홀수만 더하기

T = int(input())

for test_case in range(1, T + 1):
    num_list = map(int, input().split())    # 문자열을 입력 받으면, 공백을 기준으로 자른 후, 각 자른 숫자를 int 형으로 num_list에 넣는다.
    
    sum = 0
    for item in num_list:
        if item % 2 == 1:
            sum += item
    print(f"#{test_case} {sum}")