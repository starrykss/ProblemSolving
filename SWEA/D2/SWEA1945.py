# SWEA 1945. 간단한 소인수분해

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    num_list = [2, 3, 5, 7, 11]
    answer = [0, 0, 0, 0, 0]

    while N != 1:
        for idx, div in enumerate(num_list):
            if N % div == 0:
                answer[idx] += 1
                N = N // div
    
    print(f"#{test_case}", end=' ')
    print(' '.join(str(item) for item in answer))