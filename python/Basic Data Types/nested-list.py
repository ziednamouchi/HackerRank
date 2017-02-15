if __name__ == '__main__':
    N = int(input())
    List = sorted([[input(), float(input())] for _ in range(N)])
    second = sorted(list(set(score for name, score in List)))[0]
    print("\n".join([name for name, score in List if score == second ]))
