#Common subexpression elimination
import re

f = open("sample1.txt","r")
content = f.readlines()
subexpr_table=dict() #dictionary with key as variable and value as its subexpr


#LOGIC
#Maintain 3 order tuple(op,op1,op2) in table. Store the temporary in temporaries list.
#if any of op1 or op2 is defined again later, remove the tuple from table.

for i in range(len(content)):
	#content[i]=content[i].replace(" ","")
	if '=' in content[i] and not '==' in content[i]: #Fix for case L1: t1=10
		Assignexpr = content[i].strip().split('=')
		variable=Assignexpr[0]	#variable holds the LHS value of assignment
		if ':' in Assignexpr[0]:
			subexpr_table=dict() #comment this line for across block CSE 
			lhs=Assignexpr[0].replace(" ","").split(":")
			variable=lhs[1]

		var_list=re.split('\+|-|\*|/|%|>|<|>=|<=', Assignexpr[1]) #include carat in RHS()
		if len(var_list)==1:
			found=0
			temp=""
			#print("variable",variable)
			for key,value in subexpr_table.items():
				for j in value:
					#print("here",variable,j)
					if variable==j: #one of the operands got redefined, so pop that expression
						found=1
						temp=key
						break
			if(found==1):
				subexpr_table.pop(temp)
			print(content[i])

		if len(var_list)==2: #Expression
			tup=[]
			op1 = var_list[0]
			op2 = var_list[1]
			op=""
			flag=0
			line=content[i]
			if '+' in line:
				op='+'
			if '-' in line:
				op='-'
			if '*' in line:
				op='*'
			if '/' in line:
				op='/'
			if '<' in line:
				op='<'
			if '>' in line:
				op='>'
			if '<=' in line:
				op='<='
			if '>=' in line:
				op='>='
			if '%' in line:
				op='%'
			tup=[op,op1,op2]

			for key,value in subexpr_table.items():
				if tup==value: #common subexpression found
					Assignexpr[1]=key #Assignment[1] is RHS of assignment, so replace it with intermediate value holding the value of CS
					flag=1
			if(flag==0):
				subexpr_table[variable]=tup #unique RHS,insert into subexpr table
				
			print(str(Assignexpr[0])+'='+str(Assignexpr[1]))
	
	elif '==' in content[i]:
		spl=content[i].strip().split('==')
		if '=' in spl[0]:
			tup=[]
			Assignexpr=spl[0].split('=') #Assignexpr[0] is lhs, assignexpr[1] is first operand
			variable=Assignexpr[0]
			if ':' in Assignexpr[0]:
				lhs=Assignexpr[0].replace(" ","").split(":")
				variable=lhs[1]
			
			op1=Assignexpr[1]
			op2=spl[1]
			op="=="
			flag=0
			tup=[op,op1,op2]
			rhs=str(Assignexpr[1])+'=='+str(spl[1])

			for key,value in subexpr_table.items():
				if tup==value: #CS found
					rhs=key
					flag=1
			if(flag==0):
				subexpr_table[variable]=tup #unique expr, insert into subexpr table
			print(str(Assignexpr[0])+'='+rhs)
	else:
		print(content[i])

