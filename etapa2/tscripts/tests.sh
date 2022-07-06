rm todosresultados
rm errados

for files in ../../tests/etapa2_tests/*
do
    echo $files >> todosresultados
    expected=$(head -n1 $files)
    result=$(../etapa2 < $files 2>&1)

    echo $expected
    echo $result

    if [ "$expected" == "//CORRECT" ] && [ "$result" == "" ]
    then
        echo "✓" >> todosresultados
    elif [ "$expected" == "//INCORRECT" ] && [ "$result" == "syntax error" ]
    then
        echo "✓" >> todosresultados
    else
        echo "x" >> todosresultados
        echo "${files}" >> errados
    fi
done
