#!/usr/bin/python3
def uniq_add(my_list=[]):
  total = 0
  new = []
  for i in range(len(my_list)):
    if my_list[i] not in new:
      total += my_list[i]
      new.append(my_list[i])
  return (total)
