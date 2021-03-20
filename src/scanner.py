

import sys, getopt

if (not sys.argv[1]):
	sys.exit("Must include TinyC file");


def isDoubleTokenBreakerChar(): 
	return True;

def isRelevantChar(char):
	if ord(char) >= 32 or ord(char) == 10:
		return True;
	return False;

def isWhiteSpace(char):
	if ord(char) == 32 or ord(char) == 10:
		return True
	return False;

def isTokenBreakChar(char):
	if (ord(char) >= 33 and ord(char) < 47):
		return True;
	if (ord(char) > 57 and ord(char) < 65):
		return True;
	if (ord(char) == 91 or ord(char) == 93 or ord(char) == 94):
		return True;
	if (ord(char) > 122 and ord(char) < 127):
		return True;
	return False;

def isDoubleCharPotential(char):
	if (ord(char) == 61 or ord(char) == 33 or ord(char) == 60 or ord(char) == 62):
		return True;
	return False;

def getNextExpectedDoubleChar(char):
	if char == '=':
		return '=';
	elif char == '!':
		return '=';
	elif char == '<':
		return '=';
	elif char == '>':
		return '=';
		

file = open(sys.argv[1], "r").read();

print(sys.argv[1]);

currentToken = "";
tokens = []
quoteMode = False;
skipNextChar = False;
for index in range(0,len(file)):
	if skipNextChar:
		skipNextChar = False;
		continue;

	v = file[index]
	if isRelevantChar(v):
		if (not quoteMode):
			if ord(v) == 34:
				quoteMode = True;
				if len(currentToken) > 0:
					tokens.append(currentToken);
				currentToken = "" + v;
				continue;			
			if len(currentToken) > 0:
				if isWhiteSpace(v):
					tokens.append(currentToken);
					currentToken = "";
					continue;
				else:
					if (isTokenBreakChar(v)):
						if isDoubleCharPotential(v):
							if file[index+1] == getNextExpectedDoubleChar(v):
								skipNextChar = True;
								tokens.append(currentToken);
								currentToken = "";
								tokens.append(file[index] + file[index+1]);
								continue;
						tokens.append(currentToken);
						currentToken = "";
						tokens.append(v);
						continue;
					else:	
						currentToken = currentToken + v;
						continue;
			else:
				if (not isWhiteSpace(v)):
					if (isTokenBreakChar(v)):
						if file[index+1] == getNextExpectedDoubleChar(v):
							skipNextChar = True;
							tokens.append(file[index] + file[index+1]);
							continue;
						tokens.append(v);
						currentToken = "";
					else:
						currentToken = currentToken + v;
		else:
			if ord(v) != 34:
				currentToken = currentToken + v;
			else:
				currentToken = currentToken + v;
				tokens.append(currentToken);
				currentToken = "";
				quoteMode = False;


print(len(tokens))


				
			








		