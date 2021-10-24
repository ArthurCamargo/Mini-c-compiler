./etapa3 < $1 > ${1}.out
python script.py ${1}.out ${1}.dot
dot -Tpng ${1}.dot -o ${1}.png
