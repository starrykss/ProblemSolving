# SWEA 1974. 스도쿠 검증

def solution(matrix):
    # 행 검사
    for row in matrix:
        if len(set(row)) != 9:
            return 0
    
    # 열 검사
    for column in range(9):
        column = [matrix[row][column] for row in range(9)]
        
        if len(set(column)) != 9:
            return 0
    
    # 3x3 검사
    for i in range(0, 9, 3):
        for j in range(0, 9, 3):
            mini_matrix = []

            for x in range(0, 3):
                for y in range(0, 3):
                    mini_matrix.append(matrix[i + x][j + y])
            
            if len(set(mini_matrix)) != 9:
                return 0
    
    return 1

T = int(input())

for test_case in range(1, 1 + T):
    matrix = []

    for i in range(9):       
        row = list(map(int, input().split()))
        matrix.append(row)
    
    answer = solution(matrix)    # 겹치는 숫자가 없을 경우 1, 있을 경우 0
    
    print(f"#{test_case} {answer}")