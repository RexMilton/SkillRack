s = input().strip()
a, b, c, d = s.count("A"), s.count("B"), s.count("C"), s.count("D")
print((a // 4) * 100 + (a % 4) * 40 + b * 60 + (c // 6) * 200 + (c % 6) * 55 + d * 95)
