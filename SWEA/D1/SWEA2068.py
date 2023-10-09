# SWEA 2068. 최대수 구하기

T = int(input())

for test_case in range(1, T + 1):
    num_list = map(int, input().split())
    
    max_num = 0
    for item in num_list:
        if max_num <= item:
            max_num = item
    
    print(f"#{test_case} {max_num}")