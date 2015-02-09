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

latinoDM
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

To plot the distributions of the variables in the two cases, on the same canvas:

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
root -l macro.C
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

