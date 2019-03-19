=begin

  Nathan Steadman
  Ohio University
  CS 3560 Hw6 addition
  2019 March 17

=end

date = $stdin.gets.match(/(?<day>\d{2})\/(?<month>\d{2})\/(?<year>\d{4})/)
puts date[:month] + "/" + date[:day] + "/" + date[:year]
