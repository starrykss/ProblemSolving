# SWEA 1979. 어디에 단어가 들어갈 수 있을까?

T = int(input())

for test_case in range(1, 1 + T):
    N, K = map(int, input().split())

    # (1) 리스트에 요소들 넣기
    matrix = []
    for i in range(N):
        num_list = list(input().replace(' ', ''))
        matrix.append(num_list)

    # (2) 행렬 만들기
    ## 가로 방향
    matrix_horizontal = []
    for i in range(N):
        num_str = ''
        for j in range(N):
            num_str += matrix[i][j]
        matrix_horizontal.append(num_str)

    ## 세로 방향
    matrix_vertical = []
    for j in range(N):
        num_str = ''
        for i in range(N):
            num_str += matrix[i][j]
        matrix_vertical.append(num_str)

    # (3) '0'을 기준으로 문자열 분리하여 리스트에 넣기
    final_list = []

    final_list += [item_list.split('0') for item_list in matrix_horizontal]    # 가로 방향
    final_list += [item_list.split('0') for item_list in matrix_vertical]      # 세로 방향

    # (4) 2중 리스트를 1중 리스트로 바꾸기
    flattened_final_list = [item for inner_list in final_list for item in inner_list]

    # K 크기의 문자열 찾기
    count = 0
    for item in flattened_final_list:
        compare_target_item = '1' * K

        if item == compare_target_item:
            count += 1

    print(f"#{test_case} {count}")