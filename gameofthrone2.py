# Enter your code here. Read input from STDIN. Print output to STDOUT
import math
def countodds(arr):
    count=0
    for i in arr:
        if(i%2!=0):
            count+=1
    return count
def getAnswer(word):
    # Write Code to Compute the answer
    arr=[0]*26
    for i in word:
        arr[ord(i)-97]+=1
    n=countodds(arr)
    if(n>1):
        answer=0
    else:
        Sum=0
        for i in arr:
            Sum+=i/2
        Sumfact=1
        for i in arr:
            Sumfact=Sumfact*math.factorial(i/2)
        answer=math.factorial(Sum)/Sumfact
    return answer%1000000007
 
    
def main():
  word = raw_input()
  print getAnswer(word)  

if __name__ == '__main__':
  main()
