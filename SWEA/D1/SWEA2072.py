T = int(input())
for test_case in range(1, T + 1):
    num_list = map(int, input().split())
    
    sum = 0
    for item in num_list:
        if item % 2 == 1:
            sum += item
    print(f"#{test_case} {sum}")