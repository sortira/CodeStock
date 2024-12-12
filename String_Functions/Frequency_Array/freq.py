def freqArr(mystr):
    dc = [0]*26
    for i in mystr:
        dc[ord(i)-97]+=1
    return dc

if __name__ == "__main__":
    mystr = "codestock"
    mp = freqArr(mystr)
    for idx, v in enumerate(mp):
        print(chr(idx+97),v)

