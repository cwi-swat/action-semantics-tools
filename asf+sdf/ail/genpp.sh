
my-pack-sdf AIL.sdf ../../Utils/ATerms2/ATerms.sdf > pp/ail.def

cp pp/ail.pp pp/ail.pp.old

ppgen -i pp/ail.def > pp/ail.pp