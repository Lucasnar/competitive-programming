prob=$1
mkdir $prob
touch $prob/$prob.cpp $prob/input $prob/compile.sh
echo -e "#include<cstdio>\n\nint main(){\n\n    return 0;\n}"  >> $prob/$prob.cpp
echo -e "g++ $prob.cpp -o $prob\n./$prob < input"  >> $prob/compile.sh
cd $prob && vim $prob.cpp
