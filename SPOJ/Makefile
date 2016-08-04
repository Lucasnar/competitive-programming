CPP = $(addsuffix .cpp, ${dir})
all:
	mkdir ${dir} && touch ${dir}/$(CPP) && touch ${dir}/input && cp Makefile2 ${dir}/Makefile
	echo "#include<cstdio>\n\nint main(){\n\n    return 0;\n}"  >> ${dir}/$(CPP)
	cd ${dir} && vim ${CPP}
