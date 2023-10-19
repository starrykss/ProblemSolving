# SWEA 1946. 간단한 압축 풀기

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    matrix = []
    
    for i in range(N):
        Ci, Ki = map(str, input().split())

        Ki = int(Ki)
        matrix.append(Ci * Ki)

    char_string = ''.join(item for item in matrix)
    
    print(f"#{test_case}")
    for idx, ch in enumerate(char_string):
        if idx != 0 and idx % 10 == 0:
            print()
        print(ch, end='')
    print()