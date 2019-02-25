"""
    Nathan Steadman
    Ohio University
    CS 3560 Hw6
    2019 February 25
"""


with open("output.txt") as file: # open file to read
    list = file.read().split() # makes a list with each word of the file as an element
    index = list.index("total") # finds the index of "total"

    # uses the index of total to get the 3 numbers that come before it, to give
    #   us the number of lines, words, and characters
    print("Lines: {}".format(list[index-3]))
    print("Words: {}".format(list[index-2]))
    print("Characters: {}".format(list[index-1]))
