# SWEA 1285. 아름이의 돌 던지기

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())
    locations = list(map(int, input().split()))

    distances = []
    for loc in locations:
        distance = abs(loc)
        distances.append(distance)
    
    distances.sort()    # 오름차순 정렬
    num_min = distances[0]    # 최솟값 선택

    count = 0
    for dist in distances:
        if dist == num_min:
            count += 1
    
    print(f"#{test_case} {num_min} {count}")