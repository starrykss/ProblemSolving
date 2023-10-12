# SWEA 2001. 파리 퇴치

T = int(input())

for test_case in range(1, 1 + T):
    N, M = map(int, input().split())

    # 맵 객체를 정수형으로 변환
    N = int(N)
    M = int(M)

    # N x N 리스트를 생성하고 안에 요소 넣기
    matrix = []
    for i in range(N):
        num_list = list(map(int, input().split()))
        matrix.append(num_list)

    # M x M 크기의 영역으로 N x N 리스트 내부를 순회하면서, 해당 영역 안에 있는 값들의 합의 최댓값 구하기
    max_value = 0
    for i in range(N - M + 1):
        for j in range(N - M + 1):

            sum_area_values = 0
            for k in range(M):
                for l in range(M):
                    sum_area_values += matrix[i + k][j + l]
            
            if max_value <= sum_area_values:
                max_value = sum_area_values
    
    print(f"#{test_case} {max_value}")




