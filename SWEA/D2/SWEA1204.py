# SWEA 1204. [S/W 문제해결 기본] 1일차 - 최빈수 구하기

T = int(input())

for test_case in range(1, 1 + T):
    order = int(input())
    num_list = list(map(int, input().split()))

    # 숫자 종류 모으기 (집합)
    num_types = set(num_list)

    # 숫자 개수 세기
    num_counts = {}
    count_max = 0

    for num_type in num_types:
        count = 0
        
        for num in num_list:
            if num_type == num:
                count += 1

                if count_max <= count:
                    count_max = count
        
        num_counts[num_type] = count
    

    # 키(Key)를 토대로 내림차순 정렬
    sorted_num_counts = dict(sorted(num_counts.items(), key=lambda item: item[0], reverse=True))

    # 최빈값(키(Key)) 찾기
    num_mode = 0
    
    for key, value in sorted_num_counts.items():
        if value == count_max:
            num_mode = key
            break
    
    print(f"#{test_case} {num_mode}")