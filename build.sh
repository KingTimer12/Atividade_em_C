#!/bin/bash

for i in 'questao1' 'questao2' 'questao3' 'questao4'
do
cd "$i/"
bash build.sh
cd ..
done