# SWEA 1984. 중간 평균값 구하기

T = int(input())

for test_case in range(1, 1 + T):
    num_list = list(map(int, input().split()))

    num_list.sort()    # 오름차순 정렬
    num_list.pop(0)    # 최솟값 제거
    num_list.pop(len(num_list) - 1)    # 최댓값 제거

    value_avg = 0.0
    value_sum = 0

    for num in num_list:
        value_sum += num
    
    value_avg = value_sum / len(num_list)

    print(f"#{test_case} %.f" % value_avg)