#!/usr/bin/python3
def text_indentation(text):
	list_iterator = [".", "?", ":"]
	if not isinstance(text, str):
		raise TypeError("text must be a string")
	for i in text:
		if i not in list_iterator:
			print("{}".format(i), end="")
		else:
			print("{}".format(i))
			print()
