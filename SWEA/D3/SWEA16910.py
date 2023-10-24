# SWEA 16910. 원 안의 점

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())
    
    count = 0
    for x in range(-N, N + 1):
        for y in range(-N, N + 1):
            if pow(x, 2) + pow(y, 2) <= pow(N, 2):
                count += 1
    
    print(f"#{test_case} {count}")