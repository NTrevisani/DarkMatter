# DarkMatter

WARNING: VERY EARLY VERSION!! 

This code compares the H -> WW -> lvlv variables distributions with the pp -> HXX -> WWXX -> lvlvXX variables distributions.

To get the code and setup ROOT type:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
git clone git@github.com:NTrevisani/DarkMatter.git

cd DarkMatter

source setup_slc6.sh
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

The samples are stored on lxplus:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
H->WW: /afs/cern.ch/user/n/ntrevisa/public/latinoHWW

HXX->WWXX: /afs/cern.ch/user/d/dburns/public/HWWSignalMC/
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To exploit the HXX sample variables to build a latino-like tree, and ease the comparison:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c++ -O2 -lm `root-config --cflags --glibs` -o latinoDM latinoDM.cpp

./latinoDM
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To apply selection cuts at the latino's H->WW samples, and do a proper comparison with the Dark Matter sample:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
c++ -O2 -lm `root-config --cflags --glibs` -o latinoSelections latinoSelections.cpp

./latinoSelections
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


To plot the distributions of the variables in the two cases (SM and Dark Matter), on the same canvas, at 8TeV and 13TeV:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
root -l -b 'macro.C(8)'

root -l -b 'macro.C(13)'
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

