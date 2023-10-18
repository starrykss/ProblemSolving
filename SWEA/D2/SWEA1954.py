# SWEA 1954. 달팽이 숫자

def solution(N):
    # 0으로 채워진 N x N 크기의 배열 생성
    matrix = [[0] * N for _ in range(N)]

    # x좌표와 y좌표를 이동하기 위한 방향 설정 (오른쪽, 아래쪽, 왼쪽, 위쪽)
    dir_x = [1, 0, -1, 0]    # x축 방향 
    dir_y = [0, 1, 0, -1]    # y축 방향

    # 초기 위치와 방향 설정하기
    x = 0
    y = 0
    dir = 0

    for num in range(1, (N * N) + 1):
        matrix[y][x] = num

        next_x = x + dir_x[dir]
        next_y = y + dir_y[dir]

        # x, y 좌표 업데이트
        if 0 <= next_x < N and 0 <= next_y < N and matrix[next_y][next_x] == 0:    # 범위 안에 있을 경우
            x = next_x
            y = next_y
        else:     # 범위 밖에 있을 경우
            dir = (dir + 1) % 4
            x = x + dir_x[dir]
            y = y + dir_y[dir]
    
    return matrix

T = int(input())

for test_case in range(1, T + 1):
    N = int(input())

    matrix = solution(N)

    print(f"#{test_case}")
    for row in matrix:
        print(" ".join(map(str, row)))
