#!/bin/bash

for i in 'questao1' 'questao2' 'questao3' 'questao4' 'questao5' 'questao6' 'questao7' 'questao8'
do
cd "$i/"
bash build.sh
cd ..
done