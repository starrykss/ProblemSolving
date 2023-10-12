# SWEA 1983. 조교의 성적 매기기

T = int(input())

for test_case in range(1, 1 + T):
    N, K = map(int, input().split())

    # 1번부터 N번까지 학생들의 총점을 딕셔너리에 넣기
    total_score_dict = {}
    for student_number in range(1, N + 1):
        score_list = list(map(float, input().split()))
        score_sum = score_list[0] * 0.35 + score_list[1] * 0.45 + score_list[2] * 0.2
        total_score_dict[student_number] = score_sum
    
    # 값(value)을 기준으로 내림차순 정렬하기
    sorted_total_score_dict = dict(sorted(total_score_dict.items(), key=lambda item: item[1], reverse=True))    # item[0] : key, item[1] : value

    # 값(value)을 바꾸기
    count = 0
    grade = ''
    for key, value in sorted_total_score_dict.items():
        count += 1
        
        if count <= N * 0.1:
            grade = 'A+'
        elif count <= N * 0.2:
            grade = 'A0'
        elif count <= N * 0.3:
            grade = 'A-'
        elif count <= N * 0.4:
            grade = 'B+'
        elif count <= N * 0.5:
            grade = 'B0'
        elif count <= N * 0.6:
            grade = 'B-'
        elif count <= N * 0.7:
            grade = 'C+'
        elif count <= N * 0.8:
            grade = 'C0'
        elif count <= N * 0.9:
            grade = 'C-'
        elif count <= N * 1.0:
            grade = 'D0'
        
        sorted_total_score_dict[key] = grade
    
    answer = sorted_total_score_dict[K]

    print(f"#{test_case} {answer}")