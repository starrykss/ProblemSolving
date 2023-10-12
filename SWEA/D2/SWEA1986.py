# SWEA 1986. 지그재그 숫자

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    value_sum = 0
    for i in range(1, N + 1):
        if i % 2 == 0:
            num = i * (-1)
        else:
            num = i
        
        value_sum += num
    
    print(f"#{test_case} {value_sum}")
