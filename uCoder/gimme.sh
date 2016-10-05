for folder in "$@"
do
    mkdir "$folder"
    touch "$folder"/input
    touch "$folder"/output
    echo "file=$folder" > $folder/Makefile
    cat Makefile >> "$folder"/Makefile 
    cat template.cpp > "$folder"/"$folder".cpp
    cd "$folder"
    vim "$folder".cpp
done
