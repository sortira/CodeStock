def reverse_in_place(vc):
    start = 0
    end = len(vc) - 1

    while start < end:
        vc[start], vc[end] = vc[end], vc[start]
        start += 1
        end -= 1

if __name__ == "__main__":
    vc = [1, 2, 3]
    reverse_in_place(vc)
    print(" ".join(map(str, vc)))

