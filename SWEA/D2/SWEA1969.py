# SWEA 1959. 두 개의 숫자열

def solution(list_a, list_b):
    list_long, list_short = (list_a, list_b) if len(list_a) >= len(list_b) else (list_b, list_a)
    
    num_sum_list = []

    for i in range(len(list_long) - len(list_short) + 1):
        origin_items = list_short[:]
        target_items = list_long[i:i + len(list_short)]

        num_sum = 0
        for j in range(len(origin_items)):
            num_sum += origin_items[j] * target_items[j]
        
        num_sum_list.append(num_sum)
    
    # 최댓값 찾기
    num_sum_list.sort(reverse=True)     # 내림차순 정렬
    
    return num_sum_list[0]


T = int(input())

for test_case in range(1, 1 + T):
    N, M = map(int, input().split())

    A_nums = list(map(int, input().split()))
    B_nums = list(map(int, input().split()))

    answer = solution(A_nums, B_nums)
    
    print(f"#{test_case} {answer}")