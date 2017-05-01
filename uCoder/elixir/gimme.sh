for folder in "$@"
do
    mkdir "$folder"
    touch "$folder"/input
    touch "$folder"/output
    echo "file=$folder" > $folder/Makefile
    cat Makefile >> "$folder"/Makefile
    cat template.exs > "$folder"/"$folder".exs
    cd "$folder"
    vim "$folder".exs
done
