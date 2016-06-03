all:
	@echo "Author: Dominik Czarnota"
	@echo "strace, ltrace linux tools usage/examples"
	@echo "----------------------------------------------------------------------------------"
	@echo "strace/ltrace flags:"
	@echo " -e <open/signal/etc> - filtering by syscall"
	@echo " -t                   - timestamp"
	@echo " -c                   - statistics"
	@echo " -p <pid>             - hook strace into process"
	@echo ""
	@echo "To do:"
	@echo "	strace [-tc] ls"
	@echo "	strace/ltrace python first.py"
	@echo "	strace -e open python searchlib.py 2>&1 | grep secretlib"
	@echo "	make fancy 	- example showing that linux wildcards might be dangerous"

fancy:
	@echo "Authors: Dominik Czarnota"
	@echo "Example of 'strace' showing that unix wildcards (*, ?) can be dangerous"
	mkdir -p ex/a/b/c ex/d ex/e
	echo "content" > ex/a/b/c/file
	> ex/file1
	> ex/file2
	> ex/file3
	echo "bad file" > ex/-rf
	@echo "Example has been prepared. Now go to 'ex', see what's there, invoke 'strace rm *' and see what will happen!"
	@echo "PS: For more unix wildcards fancy stuff, refer to 'Back To The Future: Unix Wildcards Gone Wild' ( source: http://www.defensecode.com/public/DefenseCode_Unix_WildCards_Gone_Wild.txt )"
