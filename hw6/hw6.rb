=begin

  Nathan Steadman
  Ohio University
  CS 3560 Hw6
  2019 February 25

=end

quit = "n"
loop do # loop for continuous input until quit
  puts "Please enter a word:"
  input = gets.chomp.downcase # get word from user input
  if input[0] === "f" # if there is an f then replace it with with gh
    input[0]= "gh"
  end

  #if last 2 letters are sh then replace with ti
  if input[input.length - 2] === "s" && input[input.length - 1] === "h"
    input[input.length - 2] = "t"
    input[input.length - 1] = "i"
  end

  index = 1
  loop do # loop to find any i's in the middle and replace them with o
    if input[index] === "i"
      input[index] = "o"
    end

    index += 1

    if index === input.length - 1  # leaves loop when it hits the end of the word
      break
    end
  end
  puts input # print the new word

puts "Would you like to quit? (y/n)" # prompt to continue or quit
quit = gets.chomp.downcase
  if quit === "y" # leave loop if they want to quit
    break
  end
end
