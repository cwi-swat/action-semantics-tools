#!/bin/sh

cp AIL-Definition.trm.tbl  ../an2tools/ailc/src/share
my-pack-sdf AIL-Definition.sdf AIL.sdf > api/ail.def
cd api
sdf2-to-adt -i ail.def
adt-to-c -i ail.def.adt -P AIL_ -p ail-prolog.c -o AIL

./copy.sh


