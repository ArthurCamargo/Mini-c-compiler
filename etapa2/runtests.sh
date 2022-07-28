for files in tests/asl*
do
    file=$(basename "$files")
    ./etapa2 < $files
    if [ "$?" -eq 0 ];
    then
        echo "$file,0" >> resultados.txt
    else
        echo "$file,1" >> resultados.txt
    fi
done
