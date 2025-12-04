a, b=map(int, input().split())
print(a+b, a-b, a*b, "{:.2f}".format(a/b) if b != 0 else "ERROR", sep="\n")

#  dùng toán tử 3 ngôi để xử lý / 0
#  sep="\n" để xuống dòng mỗi kq (giống nhiều lệnh print)