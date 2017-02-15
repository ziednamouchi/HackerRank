if __name__ == '__main__':
    n = int(input())
    student_marks = {}
    for _ in range(n):
        name, *line = input().split()
        scores = list(map(float, line))
        student_marks[name] = scores

    query_name = input()
    percentage, s = 0, 0
    for i in range(len(student_marks[query_name])):
        s = s + student_marks[query_name][i]
    percentage = s / len(student_marks[query_name])
    print("%.2f" % percentage)
