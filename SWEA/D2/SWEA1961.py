# SWEA 1961. 숫자 배열 회전

# 시계 방향으로 90도 회전시키는 함수
def rotate_90_with_clockwise(matrix, N):
    roated_matrix = []

    for i in range(N):
        row_items = []

        for j in range(N - 1, -1, -1):
            item = matrix[j][i]
            row_items.append(item)
        
        roated_matrix.append(row_items)
    
    return roated_matrix

T = int(input())

for test_case in range(1, 1 + T):
    N = int(input())
    
    matrix = []

    for i in range(N):
        num_list = list(map(int, input().split()))
        matrix.append(num_list)
    
    # 회전시키기
    ## 90도 회전
    matrix_90 = rotate_90_with_clockwise(matrix, N)

    ## 180도 회전
    matrix_180 = rotate_90_with_clockwise(matrix_90, N)

    ## 270도 회전
    matrix_270 = rotate_90_with_clockwise(matrix_180, N)

    # 정답 출력
    print(f"#{test_case}")

    for i in range(N):
        row_90 = ''.join(map(str, matrix_90[i]))
        row_180 = ''.join(map(str, matrix_180[i]))
        row_270 = ''.join(map(str, matrix_270[i]))
        
        print(row_90, row_180, row_270)