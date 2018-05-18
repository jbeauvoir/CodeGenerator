Note: f implies the issue is fixed


Jacques BEGIN

Notes:
  - I added a ';' after <stmt> and <stmt_list>
  
  - for <param_list> I created a getter and setter to 
  set and return a boolean value. This boolean value will
  signal to us if the <param_list> being taken in is the first
  or one of many. This is relevant because it tells us whether
  or not we need to print a comma that precedes the parameter.
  
  - careful using the "genString" variable in WriteCode, it may have something
  stored in it you don't want to use.
  
  - With regards to the previous bullet, only use genString when 
  you store a lexeme ( ex: genString = lex->GetLexeme() ). For other
  strings just put the string in as a WriteCode paramater



Problems:
f - indent of the 'return __RetVal' is still off 
f - after statement outputs an object there's a space then ';'
       example: Object("a") ; outputs instead of Object("a");
  - Skipped production rule 20 -> not sure if anything needs to 
    be done inside of it
  - Production rule 18 not yet tested

Jacques END










Production Rules 

x: implemented
nt: not tested
W: works

1 x
2 x
3 x
4 x
5 x
6 x
7 x
8 x
9 x
10 x
11 x
12 x
13 x
14 contains non-terminal so I'm not sure if anything needs to be done 
15 x 
16 x
17 x
18 x nt
19 x
20 x nt
21 x
22
23
24 x nt
25
26
27
28 x nt
29 x nt
30 x nt
31 x nt
32 x nt
33 x nt
34 x nt
35 x nt
36 x nt
37 x W
38 x nt
39 x nt
40 x W
41 x nt
42 x nt
43 x nt
44 x nt
45 x nt
46 x nt
47 x nt
48 x nt
