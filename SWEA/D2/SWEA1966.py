# SWEA 1966. 숫자를 정렬하자

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())

    num_list = list(map(int, input().split()))

    num_list.sort()    # 오름차순 정렬
    
    answer = ' '.join(str(item) for item in num_list)

    print(f"#{test_case} {answer}")