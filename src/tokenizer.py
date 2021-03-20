# Import the right module
from source_code_tokenizer import PythonTokenizer

# Instantiate the tokeizer
tokenizer = PythonTokenizer()

code_example = open("sample_inputs/sample1.c").read()

# Tokenize the Python source-code given as example
tokenized = tokenizer.tokenize(code_example)

print(tokenized)