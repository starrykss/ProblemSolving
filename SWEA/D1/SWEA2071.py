# SWEA 2071. 평균값 구하기

T = int(input())

for test_case in range(1, T + 1):
    num_list = map(int, input().split())
    
    sum = 0.0
    for item in num_list:
        sum += item
    
    answer = sum / 10.0
    print(f"#{test_case} %.f" % answer)    # 소수 첫째 자리에서 반올림